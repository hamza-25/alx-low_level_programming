#include "lists.h"
/**
 * free_listint2 - func to free list
 * @head: the head of the list const
 * Return:  return a pointer NULL
*/
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head)
	{
		current = *head;
		while (current)
		{
			current = current->next;
			free(*head);
			*head = current;
		}
	}
}
