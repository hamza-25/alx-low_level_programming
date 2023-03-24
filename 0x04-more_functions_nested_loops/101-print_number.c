#include <stdio.h>
#include <string.h>
#include <math.h>
#include "main.h"


void print_number(int num)
{
    char str[10];
    int result, countStr, i;
  
    tostring(str, num);
    countStr = str_length(str);
    // printf("%d\n", countStr);
    for (i = 0; i < countStr; i++)
    {
        printf("%c", str[i]);
    }
}
 
void tostring(char str[], int num)
{
    int i, rem, len = 0, n;
 
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
}

int str_length(char str[])
{
    // initializing count variable (stores the length of the string)
    int count; 
    
    // incrementing the count till the end of the string
    for (count = 0; str[count] != '\0'; ++count);
    
    // returning the character count of the string
    return count; 
}
