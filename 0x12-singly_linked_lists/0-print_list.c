#include <stdio.h>
#include "lists.h"

/**
 * string_len - to count str
 * @s: str to be counted
 * Return: len of str
*/

int string_len(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (s++)
		i++;
	return (i);
}

/**
 * print_list - function that print content of nodes
 * @h: first node
 * Return: lenght of nodes i
*/

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i += 1;
		if (h->str == NULL)
			printf("[%d] (nil)\n", string_len(h->str));
		else
			printf("[%d] %s\n", string_len(h->len), h->str);
		h = h->next;
	}
	return (i);

}
