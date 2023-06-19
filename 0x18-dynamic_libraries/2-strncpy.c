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
	int i = 0;
	int srclen = 0;

	while (src[i++])
		srclen++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = srclen; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
