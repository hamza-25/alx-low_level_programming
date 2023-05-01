#include "lists.h"
/**
 * insert_nodeint_at_index - func to insert node at index
 * @head: the head of the list const
 * @idx: index to insert into
 * @n: the data int number
 * Return: return the address of new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *current = *head;
	listint_t *act = *head;
	unsigned int count = 0, i = 1;

	if (head == NULL || new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = current;
		(*head) = new;
		return (new);
	}
	while (current)
	{
		current = current->next;
		count++;
	}
	if (idx >= count)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	while (act && i < idx)
	{
		act = act->next;
		i++;
	}
	new->next = act->next;
	act->next = new;
	return (new);
}
