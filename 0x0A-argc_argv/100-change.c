#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: count argc
 * @argv: string of array from args
 * description: argc and argv function return cents
 * Return: Always return 0
*/
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	int i, back = 0, mny = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};

	if (mny < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
	if (argc < 3 && argc > 1)
	{
		for (i = 0; i < 5; i++)
		{
			if (mny >= coins[i])
			{
				back += mny / coins[i];
				mny = mny % coins[i];
				if (mny % coins[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", back);
	}
	}
	}
	return (0);
}
