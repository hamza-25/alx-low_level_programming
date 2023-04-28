#include "lists.h"
/**
 * add_nodeint_end - func to add node at the end
 * @head: the head of the list const
 * @n: the data to add to node at the beginning
 * Return:  liked list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_e;
	listint_t *temp = *head;

	node_e = malloc(sizeof(listint_t));
	if (!head || !node_e)
		return (NULL);
	node_e->n = n;
	node_e->next = NULL;
	if (temp)
	{
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node_e;
	}
	else
	{
		*head = node_e;
	}
	return (node_e);
}
