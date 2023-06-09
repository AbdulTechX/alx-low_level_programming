#include "main.h"
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of array.
 * @c: specific character to be initialized.
 * Return: NULL if size is 0 or a pointer to an array.
 */
char *create_array(unsigned int size, char c)
{
	char *create_array;
	unsigned int count;

	if (size == 0)
		return (NULL);

	create_array = malloc(size * sizeof(char));

	if (create_array == NULL)
		return (0);

	for (count = 0; count < size; count++)
	{
		create_array[count] = c;
	}
	create_array[count] = '\0';

	return (create_array);
}
