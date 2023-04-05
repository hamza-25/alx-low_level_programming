#include "main.h"

/**
 * _strlen_recursion - function that count lenght
 * @s: string to be counted
 * Return:lenght int
*/

int _strlen_recursion(char *s)
{

	int len = 0;
if (*s)
{
	len++;
	len += _strlen_recursion(s + 1);
}
	return (len);
}
