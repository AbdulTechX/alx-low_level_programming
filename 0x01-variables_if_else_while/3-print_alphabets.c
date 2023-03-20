#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char a = 97;
	char i = 65;

	for (a = 97; a <= 122; a++)
		putchar(a);
	for (i = 65; i <= 90; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
