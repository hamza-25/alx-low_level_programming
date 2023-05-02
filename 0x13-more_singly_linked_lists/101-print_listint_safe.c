#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - func to print list safe
 * @h: the head of the list
 * Return:  number of elements nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t num_of_elem = 0, tour = 0;

	if (head)
	{
	const listint_t *slow = head;
	const listint_t *fast = head;

	slow = slow->next;
	fast = fast->next->next;
	while (fast && fast->next)
	{
	if (slow == fast)
		break;
	slow = slow->next;
	fast = fast->next->next;
	}
	if (slow != fast)
		goto pr;
	slow = head;
	while (slow != fast)
	{
	slow = slow->next;
	fast = fast->next;
	}
pr:
	for (; head; num_of_elem++)
		{
		if (slow == head)
		{
		if (tour == 1)
		{
			printf("-> [%p] %d\n", (void *)&(head), head->n);
			return (num_of_elem);
		}
		tour++;
		}
		printf("[%p] %d\n", (void *)&(head), head->n);
		head = head->next;
		}
	}
	else
	{
		exit(98);
	}
	return (num_of_elem);
}
