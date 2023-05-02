#include "lists.h"

void free_listp(listp_t **head);
size_t print_listint_safe(const listint_t *head);

/**
 * free_listp - free a linked list
 * @head: pointer to the head of the list.
 *
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - Write a function that prints a listint_t linked list
 * @head: pointer to a head of listint_t
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *head_node, *new_node, *add_node;

	head_node = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(listp_t));

		if (new_node == NULL)
			exit (98);
		new_node->p = (void*)head;
		new_node->next = head_node;
		head_node = new_node;

		add_node = head_node;

		while (add_node->next != NULL)
		{
			 add_node = add_node->next;
			 if (head == add_node->p)
			 {
				 printf("-> [%p] %d\n", (void *)head, head->n);
				 free_listp(&head_node);
				 return (nodes);
			 }
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	free_listp(&head_node);
	return (nodes);
}
