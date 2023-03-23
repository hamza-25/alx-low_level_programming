#include "main.h"
#include <ctype.h>

/**
 * more_numbers - order numbers
 * description: print numbers 0 to 14
*/
void more_numbers(void)
{
	int i, j, num;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			num = i;
			if (i > 9)
			{
				_putchar(1 + 48);
				num = i % 10;
			}
			_putchar(num + 48);
		}

		_putchar('\n');
	}
}
