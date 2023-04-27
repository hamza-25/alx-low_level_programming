#include "lists.h"
#include <string.h>

/**
 * len_str - string lenght
 * @s: string to couned
 * Return: number of str
*/

unsigned int len_str(const char *s)
{
	unsigned int i = 0;

	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

/**
 * list_t *add_node_end - function that add node in last of list
 * @str: name of node
 * @head: first node
 * Return: return addrres of element or null if faild
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		new->len = len_str(new->str);
	}
	if (current == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next)
			current = current->next;
		current->next = new;
	}

	return (new);
}
