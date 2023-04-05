#include "main.h"

/**
 * _strpbrk - function that searches a string 
 * @s: first occurrence 
 * @accept: matches one of the bytes, or @NULL 
 * Return: byte
 */
char *_strpbrk(char *s, char *accept)
  {
   int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
  }
