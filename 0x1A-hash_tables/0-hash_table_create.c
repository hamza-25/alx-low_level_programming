#include "hash_tables.h"

/**
 * hash_table_create - function that create hash table
 * @size: size of hash table
 * Return: head of hash table or NULL if fail
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t) * size);
	if (!hash_table->array)
		return (NULL);
	return (hash_table);
}
