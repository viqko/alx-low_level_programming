#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	while (i < (int)size)
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';
	return (arr);
}
