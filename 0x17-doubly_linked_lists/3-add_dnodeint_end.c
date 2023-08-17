#include "lists.h"
/**
 * add_dnodeint - add node at the beginning of the list
 * @head: head of dlist
 * @n: data to add
 * Return: the address of new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *current = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next)
		current = current->next;
	current->next = new;
	new->prev = current;
	return (new);
}
