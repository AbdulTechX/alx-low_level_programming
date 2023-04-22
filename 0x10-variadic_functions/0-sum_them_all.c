#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 *
 * @n: the number of parameters passed to thge functions.
 * @...: A variable of parameter to calculate the sum of.
 *
 * Return: If n == 0. return 0 or 
 * Otherwise all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	if (n == 0)
		return (0);

	/* init valist for number of argument */
	va_start(nums, n);

	/* loop to acess all arguments store int valist */
	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
