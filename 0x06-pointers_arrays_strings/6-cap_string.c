#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 * @str: Capitalize all the word of string
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] >= 'a' && str[i] <= 'z'; i++)
	{
		if (str[i - 1] == ' ' ||
		    str[i - 1] == '\t' ||
		    str[i - 1] == '\n' ||
		    str[i - 1] == ',' ||
		    str[i - 1] == ';' ||
		    str[i - 1] == '.' ||
		    str[i - 1] == '!' ||
		    str[i - 1] == '?' ||
		    str[i - 1] == '"' ||
		    str[i - 1] == '(' ||
		    str[i - 1] == ')' ||
		    str[i - 1] == '{' ||
		    str[i - 1] == '}' ||
		    i == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
