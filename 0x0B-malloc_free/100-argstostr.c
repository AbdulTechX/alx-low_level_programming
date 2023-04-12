#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Write a function that concatenates all the arguments
 * of your program.
 * @ac: argument command line
 * @av: array of argument
 * Return: pointers to str or NULL if fail.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	int j;
	int size = ac;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[index++] = av[i][j];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
