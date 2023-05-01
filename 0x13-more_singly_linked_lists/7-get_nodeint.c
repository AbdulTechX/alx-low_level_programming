#include "lists.h"

/**
 * get_nodeint_at_index - Write a function that returns the nth node
 * of a listint_t linked list.
 * @head: the pointer to the head of the listint_t
 * @index: index of the node starting at 0.
 * @int: integers in the node
 * Return: NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int  nth_node;

	for (nth_node = 0; nth_node < index; nth_node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
