#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Write a function that prints numbers, followed by a new line
 *
 * @separator: is the string to be printed between numbers
 * @n:  is the number of integers passed to the function
 * @...: a variable of integer to be pass to function
 * Return: nothing if separator is NULL.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int index;

	/* init valist for number of argument */
	va_start(num, n);

	/* loop through all argument stored in th valist */
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (index < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}	
