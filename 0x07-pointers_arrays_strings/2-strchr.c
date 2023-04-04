#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string.
 * @s: the string
 * @c: the character to be located in the string.
 * Return: a pointer to the first occurrence of the c in s
 *         NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] = '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
