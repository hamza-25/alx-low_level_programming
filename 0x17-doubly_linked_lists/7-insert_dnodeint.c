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

/**
 * insert_dnodeint_at_index - add node with a given index
 * @h: head of dlist
 * @n: data to insert
 * @idx: index to add node begin with 0
 * Return: NULL if failed or address of node if success
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new = NULL;
	unsigned int len, count = 0;

	if (!h)
		return (NULL);

	len = dlistint_len((const dlistint_t *)(*h));
	if (idx > len)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (current && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (!current)
	{
		free(new);
		return (NULL);
	}
	new->next =  current->next;
	if (current->next)
		current->next->prev = new;
	new->prev = current;
	current->next = new;
	return (new);
}
