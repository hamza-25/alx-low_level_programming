#include "lists.h"
/**
 * sum_listint - func to sum all data
 * @head: the head of the list const
 * Return: return sum of data or 0
*/
int sum_listint(listint_t *head)
{
	listint_t *act = head;
	int sum = 0;

	if (!act)
		return (0);
	while (act)
	{
		sum += act->n;
		act = act->next;
	}
	return (sum);
}
