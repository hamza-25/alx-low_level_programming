#include "lists.h"
/**
 * reverse_listint - func to reverse list
 * @head: the head of the list
 * Return: return the head of list reversed
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *next = NULL;

	while ((*head) != NULL)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = (*head);
		(*head) = next;
	}
	(*head) = pre;
	return ((*head));
}
