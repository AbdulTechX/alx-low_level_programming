#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: The number of arguments supplied to the program
 * @argv: an array of pointer to the arguements.
 * Return: Always 0
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
