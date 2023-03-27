#include "main.h"

/**
 * rev_string - function that print str rev
 * description: string printing rev
 * @s: string to print
 * Return: always 0
*/

void rev_string(char *s)
{
	int strlen = 0;
	int i;
	int count = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	s--;
	char rev_str[strlen];

	for (i = strlen; i > 0; i--)
	{
		rev_str[count] = '*s';
		count++;
		s--;
	}
	s = rev_str;
	_putchar('\n');
}
