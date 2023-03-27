#include "main.h"

/**
 * _puts - function that print str
 * _strlen - function that get lenght
 * description: string printing
 * @str: string to print
 * Return: always 0
*/

void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(*str); i++)
	{
		_putchar(*str[i]);
	}
	_putchar('\n');
}

int _strlen(char *str)
{
	int strlen = 0;

	while (*s != '\0')
	{
	strlen += 1;
	s++;
	}
	return (strlen);
}
