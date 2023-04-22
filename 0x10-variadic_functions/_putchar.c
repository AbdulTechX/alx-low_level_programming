#include <unistd.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: The character to print
 *
 * Return: On succes 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
