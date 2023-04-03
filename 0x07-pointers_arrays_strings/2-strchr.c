#include "main.h"

/**
 * _strchr - function that search for char
 * @s: string for shearch
 * @c: character to search
 * Return: return s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			printf("%c", *s);
			return (*s);
		}
		s++;
	}
	return ('\0');
}
