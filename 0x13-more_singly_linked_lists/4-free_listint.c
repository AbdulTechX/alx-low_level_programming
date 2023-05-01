#include "lists.h"

/**
 * free_listint - Write a function that frees a listint_t list.
 * @head: pointer to address of the head of listint_t.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
