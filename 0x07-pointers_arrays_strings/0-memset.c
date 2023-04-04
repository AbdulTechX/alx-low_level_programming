#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte.
 * @s: memory area to be fill by n.
 * @b: constant byte to be fill to memory
 * @n: n bytes of the memory
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{

	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
