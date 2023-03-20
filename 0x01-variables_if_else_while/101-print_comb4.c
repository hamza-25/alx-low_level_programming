#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: A C program that prints with printf function
* Return: Always 0 (Success)
*/

int main(void)
{
int digit_1 = 0;
int digit_2, digit_3;

while (digit_1 < 10)
{
digit_2 = 0;
while (digit_2 < 10)
{
digit_3 = 0;
while (digit_3 < 10)
{
if (digit_1 != digit_2 &&
digit_1 < digit_2 &&
digit_2 != digit_3 &&
digit_2 < digit_3)
{
putchar(digit_1 + 48);
putchar(digit_2 + 48);
putchar(digit_3 + 48);
if (digit_1 + digit_2 + digit_3 != 24)
{
putchar(',');
putchar(' ');
}
}
digit_3++;
}
digit_2++;
}
digit_1++;
}
putchar('\n');
return (0);
}
