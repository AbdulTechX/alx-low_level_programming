#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: first string to be concatenate.
 * @s2: second string to be concatenated.
 * Return: if NULL is passed treat as empty string.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptstr;
	int strlen1;
	int strlen2;
	int index;
	int concat_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	for (strlen1 = 0; s1[strlen1] != '\0'; strlen1++)
		;
	for (strlen2 = 0; s2[strlen2] != '\0'; strlen2++)
		;
	ptstr = malloc((strlen1 * sizeof(char)) + (strlen2 * sizeof(char)) + 1);

	if (ptstr == NULL)
		return (NULL);
	for (index = 0, concat_len = 0; index < (strlen1 + strlen2 + 1); index++)
	{
		if (index < strlen1)
			ptstr[index] = s1[index];
		else
			ptstr[index] = s2[concat_len++];
	}
	return (ptstr);
}
