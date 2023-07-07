#include"hash_tables.h"

/**
 * hash_table_print - function to print values in the table
 * @ht: hash table that contain the data
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int long i = 0;

	if (ht->size < 1 || ht->array == NULL)
	{
		return;
	}
	else
				printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				printf("'%s': '%s',", ht->array[i]->key, ht->array[i]->value);
			}
		}
		printf("}\n");
}
