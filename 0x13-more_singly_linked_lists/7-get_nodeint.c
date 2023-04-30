#include "lists.h"
/**
 * get_nodeint_at_index - func to delete head of list by index
 * @head: the head of the list const
 * @index: the index to be returned
 * Return: return the index of node deletet
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *act = head;
	unsigned int count = 0;

	for (; act; index++)
	{
		if (count == index)
		{
			return (act);
		}
		act = act->next;
	}

	return (NULL);
}
