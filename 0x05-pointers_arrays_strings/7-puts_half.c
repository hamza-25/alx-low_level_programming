#include "main.h"

/**
 * puts_half - function that print
 * description: string printing rev
 * @str: string to print
 * Return: always 0
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\n'; i++)
	{
		_putchar(str[i]);
	}
}
