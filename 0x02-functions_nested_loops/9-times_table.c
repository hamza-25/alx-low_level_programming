#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * times_table - printing table with number
*/

void times_table(void)
{
 int i, j, mult;
    for (i = 0; i <=9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            mult = j * i;
            if(mult <= 9)
            {
                printf("%d", mult);
                if(j != 9)
                {
                    printf(",  ");
                }
            }
            else
            {
                 printf("%d", mult);
                 if(j != 9)
                {
                    printf(", ");
                }
            }
            
        }
      printf("\n");
    }
}
