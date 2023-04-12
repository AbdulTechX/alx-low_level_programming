#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Write a function that returns a pointer to a newly allocated
 *  space in memory, which contains a copy of the string given as a parameter.
 *  @str: string given as parameter to be copied.
 *  Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *ptstr;
	int strlen;
	int count;

	if (str == NULL)
		return (NULL);

	for (strlen = 0; str[strlen] != '\0'; strlen++);

	ptstr = malloc((strlen * sizeof(char)) + 1);

	if (ptstr == NULL)
		return (NULL);

	for (count = 0; str[count] != '\0'; count++)
	{
		ptstr[count] = str[count];
	}
	ptstr[count] = '\0';

	return (ptstr);
}
