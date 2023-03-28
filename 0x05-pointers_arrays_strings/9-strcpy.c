#include "main.h"

/**
 * _strcpy - Write a function that copies the string pointed to by src,
 *           including the terminating null byte (\0), to the buffer
 *           pointed to by dest.
 *
 * @dest: where the string to be copy to.
 * @src: string to be copy.
 * Return: to the pointer dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
