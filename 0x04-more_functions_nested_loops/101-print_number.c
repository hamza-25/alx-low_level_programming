#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to be print
*/
void print_number(int n)
{
<<<<<<< HEAD
	unsigned int num = n;
	if (n < 0)
	{
		_putcar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + 48);
=======
        unsigned int num = n;
        if (n < 0)
        {
                _putcar(45);
                num = -num;
        }
        if (num / 10)
                print_number(num / 10);
        _putchar(num % 10 + '0');
>>>>>>> b6abe7cc19bbe1d3daf842d456ed574d795783e0
}
