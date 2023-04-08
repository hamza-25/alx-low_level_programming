#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: count argc
 * @argv: string of array from args
 * descriptio: argc and argv function
 * Return: Always return 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
