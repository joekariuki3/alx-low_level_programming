#include"hash_tables.h"

/**
 * hash_table_create - function that creates a hash table of size n @size
 * @size: the size or number of cell of the table
 * Return: the memory adress of the table of NULL for failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i = 0;

	if (size > 0)
	{
		table = malloc(sizeof(hash_table_t));
		if (table == NULL)
			return (NULL);
		table->array =  malloc(sizeof(hash_node_t *) * size);
		if (table->array == NULL)
		{
			free(table);
			return (NULL);
		}
		table->size = size;
		for (i = 0; i < table->size; i++)
		{
			table->array[i] = NULL;
		}
		return (table);
	}
	return (NULL);
}
