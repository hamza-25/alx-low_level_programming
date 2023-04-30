#include "lists.h"
/**
 * delete_nodeint_at_index - func to insert node at index
 * @head: the head of the list const
 * @index: index to insert into
 * Return: return 1 or -1 if fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new;
	listint_t *current = *head;
	listint_t *act = *head;
	unsigned int count = 0, i = 1;

	if (!current)
		return (-1);

	while (current)
	{
		current = current->next;
		count++;
	}
	if (index >= count || index == 0)
		return (-1);
	while (act && i < index - 1)
	{
		act = act->next;
		i++;
	}
	new = act->next->next;
	free(act->next);
	act->next = new;
	return (1);
}
