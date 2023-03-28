#include "main.h"

/**
 * puts_half - Write a function that prints half of a string,
 *             followed by a new line.
 *
 * @str: half of a sting to be printed
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else if ((len % 2) != 0)
	{
		for (i = (len - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
