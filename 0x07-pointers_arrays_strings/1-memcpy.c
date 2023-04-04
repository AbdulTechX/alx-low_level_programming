#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: n bytes to be store in memory.
 * @src: source of memory to copy from.
 * @n: byte to be copy
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
