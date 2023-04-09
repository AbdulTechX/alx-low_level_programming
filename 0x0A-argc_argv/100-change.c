#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: command line argument
 * @argv: Arrays of comman line
 * Return: if the number of argument passed is exactly 1, return 1.
 *         other wise return 0.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}
	else if (argc < 0)
	{
		printf("0\n");
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		if ((cents - 1) >= 0)
		{
			cents -= 1;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);

	return (0);
}
