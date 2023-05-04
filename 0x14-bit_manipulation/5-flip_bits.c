#include "main.h"

/**
 * flip_bits - Write a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: The number
 * @m: The number to flip n to.
 * Return: number of bit to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits, flip = n ^ m;
	int index, count = 0;

	for (index = 63; index >= 0; index--)
	{
		bits = flip >> index;
		if (bits & 1)
			count++;
	}
	return (count);
}
