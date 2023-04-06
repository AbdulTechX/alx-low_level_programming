#include "main.h"

int is_prime_number(int n);
int is_divisible(int n, int div);

/**
 * is_divisible - check if the number is divisible by 2.
 * @n: the number to b e checked
 * @div: the divider.
 * Return: 1 if is divisible by 2 or otherwise 0 if not.
 */
int is_divisible(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);
	return (is_divisible(n, div + 1));
}
/**
 * is_prime_number - Write a function that returns 1
 *                   if the input integer is a prime number,
 * @n: interger number to be checked if they are prime number
 * Return: 1 if the input integer is prime number.
 *         otherwise return 0.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div));
}
