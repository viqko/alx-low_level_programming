#include "main.h"

/**
 * find_sqrt - a function that finds square root
 * @n: integer whose natural square root we seek
 * Return: square root
 * @sqrt: we check for this
 */

int find_sqrt(int n, int sqrt)
{
	if (sqrt * sqrt > n)
		return (-1);
	if (sqrt * sqrt == n)
		return (sqrt);
	return (find_sqrt(n, sqrt + 1));
}

/**
 * _sqrt_recursion - natural square root function
 * @n: integer
 * Return: square root or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
