#include "lists.h"

/**
 * free_list - function that add node in last of list
 * @head: first node
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *new;
	
	new = head;
	while (new)
	{
		new = new->next;
		free(head);
		head = new;
	}

	return (head);
}
