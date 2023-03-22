#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i;
	int mult;
	int prod;

	for (i = 0; i < 10; i++)
	{
		for (mult = 0; mult < 10; mult++)
		{
			prod = mult * i;
			if (mult == 0)
			{
				_putchar(prod + 48);
			}

			if (prod < 10 && mult != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + 48);
			}
			else if (prod >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
