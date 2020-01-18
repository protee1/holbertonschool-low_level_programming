#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;

	if (size != 0)
	{
		new_hash_table = malloc(sizeof(hash_table_t));
		new_hash_table->array = malloc(sizeof(hash_table_t *) * 1024);

		if (new_hash_table == NULL && new_hash_table->array == NULL)
			return (NULL);
		return (new_hash_table);
	}
	return (NULL);
}
