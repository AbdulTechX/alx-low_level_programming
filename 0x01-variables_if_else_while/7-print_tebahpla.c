#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch = 122;
	for (ch = 122; ch >= 97; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
