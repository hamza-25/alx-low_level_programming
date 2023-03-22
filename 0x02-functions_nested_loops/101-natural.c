#include "main.h"
#include <ctype.h>

/**
 * main - divide on 3 and 5
 *
 * description: odd or even
 *
 * Return: always 0 (Success)
*/

int main(void)
{
int sum, num;
for (num = 0; num <= 1024; num++)
{
if ((num % 3) == 0 || (num % 5) == 0)
sum += num;
}
printf("%d\n", sum);
return (0);
}
