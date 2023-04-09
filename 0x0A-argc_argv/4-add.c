#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that adds positive numbers.
 * @argc: command line argument.
 * @argv: array of command line.
 * Return: if one of the number contains symbols that are not digit Return 1.
 *         if it cotains digit return 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argv[i]);

	}
	printf("%d\n", add);

	return (0);
}
