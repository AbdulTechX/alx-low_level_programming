#include "lists.h"

/**
 * listint_len - Write a function that returns the number of
 * elements in a linked listint_t list.
 * @h: a pointer to nide in the list_t list.
 *
 * Return: the number of elements in a linked listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		n_nodes += 1;
		h = h->next;
	}

	return (n_nodes);
}
