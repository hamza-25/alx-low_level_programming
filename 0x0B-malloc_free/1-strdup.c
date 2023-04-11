#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - create array of chars initialized it with specific char
 * description: reserve with malloc and initialized it with specific char
 * @str: char
 * Return: NULL value or pointer to the array initialized
*/

char *_strdup(char *str)
{
	char *ptr;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	for (; str[len] != '\0'; len++)
		;
	ptr = malloc(len * sizeof(*str) + 1);
	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
		ptr[i] = str[i];
		}
	}
	return (ptr);

}
