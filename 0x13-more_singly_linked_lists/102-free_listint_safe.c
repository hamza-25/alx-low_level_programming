#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - func to list list safe
 * @h: the head of the list
 * Return:  number of elements nodes
*/
size_t free_listint_safe(listint_t **h)
{
	size_t num_of_elem = 0, size = 0;
	listint_t *current = *h;

	if (*h)
	{
	for (; current; num_of_elem++)
	{
		size += sizeof(current);
		current = current->next;
		free(*h);
		*h = current;
	}
	}
	return (size);
}
