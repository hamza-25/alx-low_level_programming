#include "main.h"

/**
 * puts_2 - function that print
 * description: string printing rev
 * @str: string to print
 * Return: always 0
*/

void puts_2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (o % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
