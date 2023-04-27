#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that print content of nodes
 * @h: first node
 * Return: lenght of nodes i
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);

}
