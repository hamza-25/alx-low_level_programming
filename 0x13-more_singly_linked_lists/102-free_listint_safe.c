#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - func to list list safe
 * @h: the head of the list
 * Return:  number of elements nodes
*/
size_t free_listint_safe(listint_t **h)
{
	size_t num_of_elem = 0;
	listint_t *current = *h;

	if (h)
	{
	for (; current; num_of_elem++)
	{
		current = current->next;
		free(*h);
		*h = current;
	}
	}
	return (num_of_elem);
}
