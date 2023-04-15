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
	int *array;
	int size;
	int i;

	if (max > min)
		return (NULL);
	size = max - min + 1;

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min++;
	return (array);
}
