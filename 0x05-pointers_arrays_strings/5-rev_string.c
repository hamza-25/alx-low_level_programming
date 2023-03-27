#include "main.h"

/**
 * rev_string - function that print str rev
 * description: string printing rev
 * @s: string to print
 * Return: always 0
*/

void rev_string(char *s)
{
	char rev = s[0];
	int i;
	int count = 0;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
	_putchar('\n');
}
