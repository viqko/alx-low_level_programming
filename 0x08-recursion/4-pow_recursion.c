#include "main.h"
#include <string.h>

/**
 * _pow_recursion - function to determine the power of an integer
 * @x: integer to be powered
 * @y: the power factor
 * Return: the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0 || x == 1)
		return (1);
	else if (x == 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}
