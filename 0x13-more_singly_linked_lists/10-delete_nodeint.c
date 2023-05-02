#include "lists.h"

/**
 * delete_nodeint_at_index - Write a function that deletes the node at index
 * index of a listint_t linked list.
 * @head: the pointer to head in listint_t.
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del_node, *tmp = *head;
	unsigned int nth_node;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (nth_node = 0; nth_node < (index - 1); nth_node++)
	{
		if (tmp->next == NULL)
			return (-1);

		tmp = tmp->next;
	}

	del_node = tmp->next;
	tmp->next = del_node->next;
	free(del_node);

	return (1);
}
