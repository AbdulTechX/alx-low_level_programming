#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 * @argc: argument commanline recieve.
 * @argv: Arrays of command line recieve.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
