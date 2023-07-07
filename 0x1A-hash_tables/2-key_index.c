#include "hash_tables.h"

/**
 * key_index - Write a function that gives you the index of a key.
 * @key: is the key
 * @size: size of area of the hash table
 * Return: Returns the index at which the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
