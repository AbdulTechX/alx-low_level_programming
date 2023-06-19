#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: The pointer where the strings is concatenating to.
 * @src: The source string
 * @n: number of bytes
 * Return: a pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen = 0;
	int srclen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i < n; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
