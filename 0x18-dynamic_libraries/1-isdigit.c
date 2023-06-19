#include "main.h"

/**
 * _isdigit - Write a function that checks for uppercase character.
 *
 * @c: number to be checked
 *
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
