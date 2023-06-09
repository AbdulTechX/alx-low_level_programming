#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function given as a
 * parameter on each element of an array.
 * @array: array of pointers
 * @size: size of array.
 * @action: pointer to the functiom we need to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
