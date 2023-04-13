#include "main.h"
#include <stdlib.h>

/**
 * _strlen - claculate and return string length.
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pstr;
	int index;
	int concat_len;
	int j;
	int num = n;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);
	concat_len = _strlen(s1) + num + 1;

	pstr = malloc(sizeof(*pstr) * concat_len);
	if (pstr == NULL)
		return (NULL);

	for (index = 0; s1[index] != '\0'; index++)
		pstr[index] = s1[index];
	for (j = 0; j < num; j++)
		pstr[index + j] = s2[j];
	pstr[index + j] = '\0';

	return (pstr);
}
