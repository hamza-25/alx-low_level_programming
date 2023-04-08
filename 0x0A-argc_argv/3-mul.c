#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: count argc
 * @argv: string of array from args
 * descriptio: argc and argv function
 * Return: Always return 0
*/
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);
		int result;

		result = n1 * n2;
		printf("%d\n", result);
	}
	return (0);
}
