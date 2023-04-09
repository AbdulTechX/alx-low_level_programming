#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argc: command line argument
 * @argv: array of command line
 * Return: 1 if the program does not recieve two argument it print error.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	i = atoi(argv[1]);
	j = atoi(argv[2]);

	prod = (i * j);

	printf("%d\n", prod);

	return (0);
}

