#include "main.h"
#include <stdlib.h>

/**
 * array_range - Write a function that creates an array of integers.
 * @min: minimum integer.
 * @max: max interger.
 * Return: the pointer to the newly created arra
 */
int *array_range(int min, int max)
{
	int *array_range;
	int size;
	int i;

	if (min > max)
		return (NULL);

	size = ((max + 1) - min);

	array_range = malloc(sizeof(int) * size);

	if (array_range == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array_range[i] = min++;

	return (array_range);
}
