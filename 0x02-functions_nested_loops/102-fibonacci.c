#include "main.h"
/**
 * main - entry point
 * Description: print fibbonachi
 * Return: Always (0) (Success)
*/
int main(void)
{
int n;
unsigned long fib1 = 0, fib2 = 1, sum;
for (n = 0; n < 50; n++)
{
sum = fib1 + fib2;
printf("%lu", sum);
fib1 = fib2;
fib2 = sum;
if (n != 49)
{
printf(", ");
}
else
{
printf("\n");
}
}
return (0);
}
