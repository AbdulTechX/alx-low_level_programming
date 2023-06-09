#include "lists.h"

/**
 * insert_nodeint_at_index - Write a function that inserts a new
 * node at a given position.
 * @head: pointer to head of the listint_t.
 * @idx: index of the list where the new node should be added.
 * @n: value of the new node.
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = *head;
	unsigned int nth_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (new_node);
	}

	for (nth_node = 0; nth_node < (idx - 1); nth_node++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
	}

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
