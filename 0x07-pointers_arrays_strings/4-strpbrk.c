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
      char* head = s;
      char* k;
      i = 0;
       while (s[i] != '\0')
       {
           j = 0;
           while (accept[j] != '\0')
            {
                if (accept[j] == s[i])
                {
                    k = &s[i];
                    return (k);
                }
                j++;
            }
          i++;
       }
       return  (0);
  }
