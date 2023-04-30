#include "lists.h"

/**
 * print_listint - Write a function that prints all the elements
 * of a listint_t list.
 * @h: pointer to the head of the list_t list
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes  = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h += 1;
		h = h->next;
	}

	return (nodes);
}
