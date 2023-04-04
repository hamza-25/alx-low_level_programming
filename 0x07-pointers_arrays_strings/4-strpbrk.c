#include "main.h"

/**
 * _strpbrk - function that searches a string 
 * @s: first occurrence 
 * @accept: matches one of the bytes, or @NULL 
 * Return: byte
 */
char *_strpbrk(char *s, char *accept)
  {
    int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
  }
