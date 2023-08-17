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
 * delete_dnodeint_at_index - delete node with a given index
 * @head: head of dlist
 * @index: index to add node begin with 0
 * Return: -1 if failed or 1 success
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int len, count = 0;

	if (!head)
		return (-1);

	len = dlistint_len((const dlistint_t *)(*head)) - 1;
	if (index > len)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		(*head)->next->prev = NULL;
		free(current);
		return (1);
	}
	while (current)
	{
		if (count == index)
			break;
		current = current->next;
		count++;
	}
	if (!current->next)
	{
		current->prev->next = NULL;
		free(current);
        	return(1);
	}
	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return(1);
}
