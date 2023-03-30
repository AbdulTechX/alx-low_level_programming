#include "main.h"

/**
 * _strncpy - Write a function that copies a string.
 * @src: This is the string to be copied
 * @dest: The point destination array where content is to be copied.
 * @n: the number of charcters to be copied from source.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
