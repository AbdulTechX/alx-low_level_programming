#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the numbers,
 *                from 0 to 14, followed by a new line.
 *
 */
void more_numbers(void)
{
	int n;
	int k;

	for (n = 0; n <= 9; n++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
