#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - function argc and argv
 * description: argc and argv function
 * @ac: means argc
 * @av: means av
 * Return: NULL value or pointer to the array initialized
*/

void *argstostr(int ac, char **av)
{
int i, j, k = 0,len = 0;
  char *ptr;
  
  if(ac == 0 || av == NULL)
  {
    return (NULL);
  }
    
  for (i = 0; i < ac; i++)
  {
    for (j = 0; av[i][j] != '\0'; j++)
  {
    len++;
  }
  len++;
  }
  len++;
  
  ptr = (char*)malloc(sizeof(char) * len);
  if (ptr == NULL)
  {
    return (NULL);
  }
  else
  {
    for (i = 0; i < ac; i++)
  {
    for (j = 0; av[i][j] != '\0'; j++, k++)
  {
      ptr[k] = av[i][j];
  }
  ptr[k] = '\n';
  k++;
  }
  ptr[k] = '\0';
  return (ptr);
  }	
}
