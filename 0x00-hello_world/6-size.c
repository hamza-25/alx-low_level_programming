#include <stdio.h>
/**
* main - Entry point
* Description: A C program that prints with printf function
* Return: Always 0 (Success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %u bytes(s)\n", sizeof(char));
printf("Size of an int: %u bytes(s)\n", sizeof(int));
printf("Size of a long int: %u byte(s)\n", sizeof(long int));
printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
