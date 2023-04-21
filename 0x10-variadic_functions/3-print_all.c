#include "variadic_functions.h"
#include <stdio.h>
/**
 * format_char - type of format
 * @separator: separator to be printed
 * @ap: array of args
 * Return: void
*/
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_list(ap, int));
}
/**
 * format_int - type of format
 * @separator: separator to be printed
 * @ap: array of args
 * Return: void
*/
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_list(ap, int));
}
/**
 * format_float - type of format
 * @separator: separator to be printed
 * @ap: array of args
 * Return: void
*/
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_list(ap, double));
}
/**
 * format_string - type of format
 * @separator: separator to be printed
 * @ap: array of args
 * Return: void
*/
void format_string(char *separator, va_list ap)
{
	char *str = va_list(ap, char *);

	switch ((int)(!str))
	{
		case 1:
			str = "(nil)";
	}
	printf("%s%s", separator, str);
}
/**
 * print_all - print all inputs
 * @format: forma to be printed
 * Return: void
*/
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	alias_t aliases[] = {
		{"i", format_int},
		{"c", format_char},
		{"s", formart_string},
		{"f", format_float},
		{NULL, NULL}
	};
	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (aliases[j].alias)
		{
			if (format[i] == aliases[j].alias[0])
			{
				aliases[j].fun(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
