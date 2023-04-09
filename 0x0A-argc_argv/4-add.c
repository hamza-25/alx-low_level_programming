#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: count argc
 * @argv: string of array from args
 * descriptio: argc and argv function
 * Return: Always return 0
*/
int main(int argc, char *argv[])
{
	if (argc - 1 == 0)
	{
		printf("0\n");
	}
	else
	{
		int i, j;
		int sum = 0;
		int n;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
		sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
