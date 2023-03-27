#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers.
 *
 * @a: Integer 1.
 * @b: Integer 2.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
