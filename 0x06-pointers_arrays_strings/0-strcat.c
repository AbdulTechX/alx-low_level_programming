#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: the pointer where the strings is concatenates to.
 * @src: The source of the two strings.
 *
 * Return: result of string to  dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int destlen = 0;
	int srclen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0;  src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
