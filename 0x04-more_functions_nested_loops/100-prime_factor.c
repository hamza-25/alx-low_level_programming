#include <stdio.h>
#include <math.h>

double _sqrt(double a) {
    
  double i = 0;
  double j = a / 2;

  while (j != i) {
    i = j;
    j = (a / i + i) / 2;
  }
  
  return j;
  
}

/**
 * largest_prime_factor - print the largest prime factor
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
        int prmNum, largest;
        
        while(num % 2 == 0)
        {
                num = num /2;
        }
        for (prmNum = 3; prmNum <= _sqrt(num); prmNum += 2)
        {
                while (num % prmNum == 0)
                {
                num = num / prmNum;
                largest = prmNum;
                }
        }
        if (num > 2)
        {
                largest = num
        }
        printf("%d\n", largest);
}

/**
 * main - entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
        largest_prime_factor(612852475143);
        return (0);
}
