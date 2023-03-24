#include "main.h"

/**
 * print_triangle - Write a function that prints a triangle,
 *                  followed by a new line.
 *
 * @size: the size of the triangle
 *
 */
void print_triangle(int size)
{
	int hgt;
	int wdt;

	if (size > 0)
	{
		for (wdt = 1; wdt <= size; wdt++)
		{
			for (hgt = size - wdt; hgt > 0; hgt--)
				_putchar(' ');

			for (hgt = 0; hgt < wdt; hgt++)
				_putchar('#');

			if (wdt == size)

				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
