#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);

}
/**
 * _strcopy - copies a string pointed to by src, including the
 * terminatingnull byte to a buffer pointed to dest.
 * @dest: The buffer storing the string copy
 * @src: The source of the string.
 *
 * Return: pointer to a dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog -  Write a function that creates a new dog.
 * @name: name of the new dog.
 * @age: age of the new dog
 * @owner: the new dog owner.
 * Return: if function fail NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
		doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (doggy->name == NULL)
		{
			free(doggy);
			return (NULL);
		}
		doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (doggy->owner == NULL)
		{
			free(doggy->name);
			free(doggy);
			return (NULL);
		}
		doggy->name = _strcopy(doggy->name, name);
		doggy->age = age;
		doggy->owner = _strcopy(doggy->owner, owner);

		return (doggy);
}
