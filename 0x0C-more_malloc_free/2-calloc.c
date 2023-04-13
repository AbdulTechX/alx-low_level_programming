#include "main.h"
#include <stdlib.h>

/**
 * _calloc - The _calloc function allocates memory for an array of nmemb
 * elements of size bytes each.
 * @nmemb: element size of byte
 * @size: size of memory allocated.
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	char *filler;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	filler = p;

	for (i = 0; i < (nmemb * size); i++)
	{
		filler[i] = '\0';
	}
	return (p);
}
