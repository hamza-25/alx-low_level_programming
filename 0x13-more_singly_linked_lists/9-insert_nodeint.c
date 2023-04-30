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
	unsigned int count = 0;

	if (!current || !new)
		return (NULL);
	new->n = n;
	while (current && count < idx)
	{
		current = current->next;
		count++;
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
