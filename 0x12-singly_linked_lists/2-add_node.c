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
	while (s)
		i++;
	return (i);
}

/**
 * list_t *add_node - function that add node in front of list
 * @str: name of node
 * @head: first node
 * Return: return addrres of element or null if faild
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = len_str(new->str);
	}
	new->next = head;
	head = new;
	return (new);
}
