#include "hash_tables.h"

/**
 * key_index - function that generate hash index
 * @size: size of hash table
 * @key: string to be hashed
 * Return: unsigned long int
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;
	return (index);
}
