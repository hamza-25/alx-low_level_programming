#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;
	while (h != NULL)
	{
		i += 1;
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);

}
