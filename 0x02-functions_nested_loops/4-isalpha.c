#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character.
 *
 * @c: is a letter, lowercase or uppercase
 *
 * Return: 1 if c is a letter, lowercase or uppercase or 0 otherwise
 */
int _isalpha(int c)
{
	
	if ((c >= 97 && c <= 122) || (c >=65 && c <=98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
