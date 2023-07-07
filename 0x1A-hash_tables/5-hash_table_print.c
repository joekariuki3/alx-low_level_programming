#include"hash_tables.h"

/**
 * hash_table_print - function to print values in the table
 * @ht: hash table that contain the data
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int long i = 0;
	hash_node_t *temp = NULL;
	int commer;

	if (ht->size < 1 || ht->array == NULL)
	{
		return;
	}
	else
				printf("{");
		for (i = 0, commer = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			if (temp != NULL)
			{
				if (commer == 1)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				while ((temp = temp->next) != NULL)
				{
					printf(", ");
					printf("'%s': '%s'", temp->key, temp->value);
				}
				commer = 1;
			}
		}
		printf("}\n");
}
