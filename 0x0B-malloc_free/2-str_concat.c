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

char char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size, i, len1 = 0, len2 = 0;

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
		for (i = 0; len1 < size; len1++)
		{
			s1[len1] = s2[i];
		}
	}
	return (ptr);

}
