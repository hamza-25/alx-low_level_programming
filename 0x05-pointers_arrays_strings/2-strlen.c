#include "main.h"

/**
 * _strlen - function that count lenght
 * description: count lenght of string
 * @s:string
 * Return: always 0
*/

int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
	strlen += 1;
	*s++;
	}
	return strlen;
}
