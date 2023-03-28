#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 * description: rand passwd
 * Return: 0 is success
 */

int main(void)
{
	char c;
	int sum;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
