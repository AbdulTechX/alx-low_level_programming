#include "main.h"

/**
 * factorial - Write a function that returns the factorial of a given number.
 * @n: factorial number.
 * Return: -1 if n is lower than 0, indicate an error.
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
