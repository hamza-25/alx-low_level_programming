#include "main.h"

/**
 * _strpbrk - function that searches a string 
 * @s: first occurrence 
 * @accept: matches one of the bytes, or @NULL 
 * Return: byte
 */
char *_strpbrk(char *s, char *accept)
{
	int j;
		while (*s)
		{
			for (j = 0; accept[j]; j++)
			{
				if (*s == accept[j])
					return (s);
			}
			s++;
		}
	return (NULL);
}
