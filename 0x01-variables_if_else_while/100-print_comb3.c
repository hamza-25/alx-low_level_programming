#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Description: A C program that prints with printf function
* Return: Always 0 (Success)
*/

int main(void)
{
int digit_1 = 0, digit_2;

while (digit_1 < 10)
{
digit_2 = 0;
while (digit_2 < 10)
{
if (digit_1 != digit_2 && digit_1 < digit_2)
{
putchar(digit_1 + 48);
putchar(digit_2 + 48);
if (digit_1 + digit_2 != 17)
{
putchar(',');
putchar(' ');
}
}
digit_2++;
}
digit_1++;
}
putchar('\n');
return (0);
}
