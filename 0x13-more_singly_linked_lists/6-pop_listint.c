#include "lists.h"
/**
 * pop_listint - func to delete head of list
 * @head: the head of the list const
 * Return:  return the daata
*/
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int num = current->n;

	if (current)
	{
		current = current->next;
		free(*head);
		*head = current;
		return (num);
	}
	else
	{
		return (0);
	}
}
