#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len -locates the index marking the end of the first word in th string.
 * @str: The string to be searched.
 *
 * Return: word pointed to a string.
 */
int word_len(char *str)
{
	int index = 0;
	int len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}
/**
 * count_word - helper function to count the number of words in the string
 * @s: string to be evacuate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int index, words, len;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}

	return (words);
}
/**
 * strtow - splits a string into words
 * @str: string to be split.
 *
 * Return: pointer to an array of strings (success)
 * or NULL (Error)
 */
char **strtow(char *str)
{

