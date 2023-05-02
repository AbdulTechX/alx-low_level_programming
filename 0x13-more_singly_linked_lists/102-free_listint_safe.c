#include "lists.h"

void free_listp2(listp_t **head);
size_t print_listint_safe(const listint_t *head);

/**
 * free_listp2 - free a linked list
 * @head: pointer to the head of the list.
 *
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *current;


	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - Write a function that frees a listint_t list.
 * @h: head of the list
 *
 * Return: size of the list that will be freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *head_node, *new_node, *add_node;
	listint_t *tmp;

	head_node = NULL;
	while (*h != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit(98);
		new_node->p = (void *)*h;
		new_node->next = head_node;
		head_node = new_node;

		add_node = head_node;

		while (add_node->next != NULL)
		{
			add_node = add_node->next;
			if (*h == add_node->p)
			{
				*h = NULL;
				free_listp2(&head_node);
				return (nodes);
			}
		}
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		nodes++;
	}
	*h = NULL;
	free_listp2(&head_node);
	return (nodes);
}
