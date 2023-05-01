#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - func to print list safe
 * @h: the head of the list
 * Return:  number of elements nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t num_of_elem = 0;

	if (head)
	{
		for (; !head; num_of_elem++)
		{
			printf("[%p] %d\n", (void *)&(head), head->n);
			head = head->next;
		}
	}
	else
	{
		exit (98);
	}
	return (num_of_elem);
}
