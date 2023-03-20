#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch = 97;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
