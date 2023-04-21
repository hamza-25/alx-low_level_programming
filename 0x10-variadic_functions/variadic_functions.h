#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct alias - Struct alias
 * @alias: format 
 * @fun: function
*/
typedef struct alias
{
	char *alias;
	void (*fun)(char *, va_list);
} alias_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
