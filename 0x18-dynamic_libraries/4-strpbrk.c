#include "main.h"


/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes
 * @s: string to be search.
 * @accept: byte in string
 * Return: pointer to byte in s the matches one in accept.
 *         or null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}
