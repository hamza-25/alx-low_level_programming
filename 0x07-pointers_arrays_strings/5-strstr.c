#include "main.h"

/**
 * _strstr - locates
 * @haystack: the longer string
 * @needle: the first occurrence
 * Return: a pointer beg of substring or @Null.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int k = 0, u = 0;

	while (haystack[k])
	{
		while (needle[u] && (haystack[k] == needle[0]))
		{
			if (haystack[k + u] == needle[u])
				u++;
			else
				break;
		}
		if (needle[u])
		{
			k++;
			u = 0;
		}
		else
			return (haystack + k);
	}
	return (0);
}
