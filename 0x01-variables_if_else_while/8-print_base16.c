#include <stdio.h>

/**
* main - Entry point
* Description: A C program that prints with printf function
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	int j;
	char alph[6] = "abcdef";

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	for (j = 0; j < 6; j++)
	{
		putchar(alph[j]);
	}
	putchar('\n');
	return (0);
}
