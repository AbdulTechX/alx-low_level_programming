#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer.
 * @array: array of integer.
 * @size: the number of element in the array.
 * @cmp: is apointer to function to be used to compared values
 * Return: returns the index of the first element for which the cmp
 * function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
