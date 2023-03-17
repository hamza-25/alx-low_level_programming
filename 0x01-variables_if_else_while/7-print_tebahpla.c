#include <stdio.h>

/**
* main - Entry point
* Description: A C program that prints with printf function
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 25; i >= 0; i--)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
