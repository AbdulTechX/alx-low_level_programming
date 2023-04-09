#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argc: command line argument to be printed.
 * @argv: array of the command line arguments
 * Return: 0 Always
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
