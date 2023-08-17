#include "lists.h"
/**
 * get_dnodeint_at_index - get node by index
 * @head: head of dlist
 * @index: index of node
 * Return: the address of the node found
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len, count = 0;
	dlistint_t *current = head;

	if (!head)
		return (NULL);
	len = dlistint_len((const dlistint_t *)head);
	if (index > len)
		return (NULL);
	while (current)
	{
		if (index == count)
			break;
		current = current->next;
		count++;
	}
	return (current);
}
