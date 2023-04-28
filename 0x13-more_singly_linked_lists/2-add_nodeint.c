#include "lists.h"
/**
 * add_nodeint - func to add node at the beginning
 * @head: the head of the list const
 * @n: the data to add to node at the beginning
 * Return:  number of elements
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_b;

	node_b = malloc(sizeof(listint_t));
	if (!head || !node_b)
		return (NULL);
	node_b->n = n;
	node_b->next = *head;
	*head = node_b;
	return (node_b);
}
