#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - create array of chars initialized it with specific char
 * description: reserve with malloc and initialized it with specific char
 * @s1: char 1
 * @s2: char 2
 * @n: number of bytes
 * Return: NULL value or pointer to the array initialized
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int size, i, len1 = 0, len2 = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[len1] != '\0'; len1++)
		;
	for (; s2[len2] != '\0'; len2++)
		;
	if (n >= len2)
	{
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
	}
	else
	{
	size = len1 + n;
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
		for (; i < len1 + n; i++, j++)
		{
			ptr[i] = s2[j];
		}
		ptr[i] = '\0';
	}
	s1 = ptr;
	}
	return (s1);
}
