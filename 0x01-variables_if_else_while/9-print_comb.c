#include <stdio.h>

/**
* main - Entry point
* Description: A C program that prints with printf function
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
