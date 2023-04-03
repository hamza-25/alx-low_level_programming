#include "main.h"
/**
 * print_diagsums - print the sums of the two diagonals
 * @a: pointer to start
 * @size: width of matrixcolumn
 * Return: void
*/
void print_diagsums(int *a, int size)
{
	int k, e, o, h = 0, g = 0;

	for (k = 0; k < size; k++)
	{
		o = (k * size) + k;
		h += *(a + o);
	}
	for (e = 0; e < size; e++)
	{
		o = (e * size) + (size - 1 - e);
		g += *(a + o);
	}
	printf("%i, %i\n", h, g);
}
