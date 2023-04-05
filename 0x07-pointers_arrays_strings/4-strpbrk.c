#include "main.h"

/**
 * _strpbrk - function that searches a string 
 * @s: first occurrence 
 * @accept: matches one of the bytes, or @NULL 
 * Return: byte
 */
char *_strpbrk(char *s, char *accept)
  {
   int i, j;

      i = 0;
       while (s[i] != '\0')
       {
           j = 0;
           while (accept[j] != '\0')
            {
                if (s[i] == accept[j])
                {
                    return (s + i);
                }
                j++;
            }
          i++;
       }
       return  (NULL);
  }
