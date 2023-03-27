#include "main.h"
#include <stdio.h>

/**
 * _strlen - Write a function that returns the length of a string.
 *
 * @s: lenght of the string
 * Return: _strlen.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
