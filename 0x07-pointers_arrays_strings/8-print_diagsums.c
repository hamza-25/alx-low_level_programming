#include "main.h"
/**
 * print_diagsums - print the sums of the two diagonals
 * @a: pointer to start
 * @size: width of matrixcolumn
 * Return: void
*/
void print_diagsums(int *a, int size)
	{
	int i;
	int sum2, sum1 = 0; 
	for (i = 0; i < size; i++)
	{
	sum1 += a[i];
	sum2 += a[size - 1 - i];
	a += size;
}
	printf("%d, %d\n", sum1, sum2);
}
