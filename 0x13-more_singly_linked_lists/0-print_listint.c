#include "lists.h"
#include <stdio.h>
/**
 * print_listint - func to print list of node int
 * @h: the head of the list
 * Return:  number of elements
*/
size_t print_listint(const listint_t *h)
{
	size_t num_of_elem = 0;

	if (h)
	{
		for (; h != NULL; num_of_elem++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (num_of_elem);
}
