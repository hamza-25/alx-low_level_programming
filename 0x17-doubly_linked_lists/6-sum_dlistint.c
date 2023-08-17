#include "lists.h"
/**
 * sum_dlistint - get sum of all nodes
 * @head: head of dlist
 * Return: int or 0 if empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	unsigned int sum = 0;

	if (!head)
		return (0);
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
