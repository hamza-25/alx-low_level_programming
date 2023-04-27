#include "lists.h"

/**
 * list_len - function that print content of nodes
 * @h: first node
 * Return: lenght of nodes i
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);

}
