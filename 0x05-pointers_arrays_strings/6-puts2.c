#include "main.h"

/**
 * puts_2 - function that print
 * description: string printing rev
 * @str: string to print
 * Return: always 0
*/

void puts_2(char *str)
{
	int strlen = 0;
	int i;
	char rev_str;
	int count = 0;

	while (*str != '\0')
	{
		strlen++;
		str++;
	}
	str--;
	for (i = 0; i < strlen; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
