#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *duplicate_str;
	int i = 0, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + i))
	{
		len++, i++;
	}
	len++;
	duplicate_str = malloc(sizeof(char) * len);

	if (duplicate_str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < len)
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}
	return (duplicate_str);
}
