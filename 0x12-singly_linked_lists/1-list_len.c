#include "lists.h"

/**
 * list_len - Write a function that returns the number of elements
 * in a linked list_t list.
 * @h: singly linked list
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t n_element;

	n_element = 0;

	while (h != NULL)
	{
		h = h->next;
		n_element++;
	}
	return (n_element);
}
