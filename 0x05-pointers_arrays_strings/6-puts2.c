#include "main.h"

/**
 * puts_2 - function that print
 * description: string printing rev
 * @str: string to print
 * Return: always 0
*/

void puts_2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
			_putchar(str[o]);
	}
	_putchar(str[o]);
}
