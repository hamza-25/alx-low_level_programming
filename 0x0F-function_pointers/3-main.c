#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code 
 * @argc: num of args
 * @argv: array of args 
 * Return: 0
*/

int main(int argc, char **argv)
{
	int (*op_fun)(int, int);
	int a, b;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_fun = get_op_func(argv[2]);
	if (!op_fun)
		printf("Error\n"), exit(99);
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", op_fun(a, b));
	return (0);
}
