#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - find square root
 * @root: root of the number.
 * @n: the number to be square.
 * Return: If the number has a natural square root - the square root.
 */
int find_sqrt(int n, int root)
{
	if (root * root == n)
		return (root);
	if (root == n / 2)
		return (-1);
	return (find_sqrt(n, root + 1));

}
/**
 * _sqrt_recursion - Write a function that returns the natural
 * square root of a number.
 * @n: is the number to square root.
 * Return: -1 if n does not have natural square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
