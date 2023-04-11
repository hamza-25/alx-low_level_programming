#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - create array of chars initialized it with specific char
 * description: reserve with malloc and initialized it with specific char
 * @s1: char 1
 * @s2: char 2
 * Return: NULL value or pointer to the array initialized
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size, i, len1 = 0, len2 = 0, j = 0;

	for (; s1[len1] != '\0'; len1++)
		;
	for (; s2[len2] != '\0'; len2++)
		;
	size = len1 + len2;
	ptr = malloc(size * sizeof(*s1) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			ptr[i] = s1[i];
		}
		for (; i < len1 + len2; i++, j++)
		{
			ptr[i] = s2[j];
		}
		ptr[i] = '\0';
	}
	s1 = ptr;
	return (s1);
}
