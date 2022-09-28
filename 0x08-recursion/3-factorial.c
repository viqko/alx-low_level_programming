#include "main.h"
#include <string.h>

/**
 * factorial - a function that multiplies a number down to 1
 * @n: number to multiply down to 1
 * Return: Return answer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
