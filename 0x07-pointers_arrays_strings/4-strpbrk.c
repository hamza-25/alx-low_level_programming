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
       for (i = 0; accept[i] != '\0'; i++)
       {
           for (j = 0; s[j] != '\0'; j++)
            {
                if (accept[i] == s[j])
                {
                    return s[j];
                }
            }
       }
       return  NULL;
  }
