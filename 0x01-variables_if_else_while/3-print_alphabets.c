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
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALPH[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(ALPH[j]);
	}
	putchar('\n');
	return (0);
}
