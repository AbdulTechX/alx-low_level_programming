#include "main.h"

/**
 * reverse_array - Write a function that reverses the content of an
 * array of integers.
 * @n: The number of element of array
 * @a: array to be reverse
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;


	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
