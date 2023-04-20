#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print all inputs
 * @format: forma to be printed
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int i = 0, j, l = 0;
	char *r;
	const char r_format[] = "csif";

	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (r_format[0])
		{
		if (format[i] == r_format[j] && l)
		{
			printf(", ");
			break;
		} j++;
		}
		#include "switch.c"
		i++;
	}
	printf("\n"), va_end(ptr);
}
