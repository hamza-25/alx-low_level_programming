#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print all inputs
 * @format: forma to be printed
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
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int)), l = 1;
				break;
			case 'i':
				printf("%d", va_arg(ptr, int)), l = 1;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double)), l = 1;
				break;
			case 's':
				r = va_arg(ptr, char *), l = 1;
				if (r)
				{
					printf("%s", r);
					break;
				}
				printf("(nil)");
				break;
		} i++;
	}
	printf("\n"), va_end(ptr);
}
