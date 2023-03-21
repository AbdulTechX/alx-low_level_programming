#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character.
 *
 * @c: The charcter in ASCII code
 *
 * Return: 1 if c lower or otherwise 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
