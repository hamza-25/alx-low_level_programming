#include "lists.h"
/**
 * listint_len - func to print list of node int
 * @h: the head of the list const
 * Return:  number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t num_of_elem = 0;

	if (h)
	{
		for (; h != NULL; num_of_elem++)
			h = h->next;
	}
	return (num_of_elem);
}
