#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head node of a
 * listint_t linked list.
 * @head: the pointer to address head of the listint_t
 * Return:  the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int retain;

	if (*head == NULL)
		return (0);

	temp = *head;
	retain = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (retain);
}
