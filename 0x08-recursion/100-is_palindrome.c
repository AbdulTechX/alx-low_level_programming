#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - check for the string length.
 * @s: string length to be checked.
 * Return: len.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}
/**
 * check_palindrome - check for strinf if palindrome.
 * @s: string to be checked if palindrome.
 * @len: lenght of the string.
 * @index: string index.
 * Return: 1 if palindrome or 0 if not.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
	return (0);
}

/**
 * is_palindrome - Write a function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: string to be checked.
 * Return: 1 if string is palindrome or 0 if not.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, index));
}
