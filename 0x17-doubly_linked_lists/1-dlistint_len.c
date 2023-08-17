#include "lists.h"
/**
 * dlistint_len - get length of dlist
 * @h: head of dlist
 * Return: number of node
*/

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *current = h;

	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}
