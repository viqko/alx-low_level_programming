#include "main.h"
#include <string.h>

/**
 * _puts_recursion - printing a string
 * @s: the string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
