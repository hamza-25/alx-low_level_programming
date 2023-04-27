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
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", string_len(h->str), "(nil)");
		else
			printf("[%d] %s\n", string_len(h->str), h->str);
		h = h->next;
		i++;
	}
	return (i);

}
