#include"hash_tables.h"

/**
 * hash_table_create - function that creates a hash table of size n @size
 * @size: the size or number of cell of the table
 * Return: the memory adress of the table of NULL for failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size > 0)
	{
		table = (hash_table_t *)malloc(sizeof(hash_table_t) * size);
		if (table == NULL)
			return (NULL);
		return (table);
	}
	return (NULL);
}
