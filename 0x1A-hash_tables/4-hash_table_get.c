#include"hash_tables.h"

/**
 * hash_table_get - retrieve a value using a key
 * @ht: hash table containing the data
 * @key: string to look for
 * Return: string value or NULL on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/* get key index */
	unsigned long int element_index = 0;

	unsigned const char *key_u = NULL;

	hash_node_t *temp = NULL;

	key_u = (unsigned const char *) key;
	element_index = key_index(key_u, ht->size);
	if (element_index > ht->size)
		return (NULL);
	if (ht->array[element_index] == NULL)
		return (NULL);
	if (strcmp(ht->array[element_index]->key, key) == 0)
	{
		if (ht->array[element_index]->value != NULL)
			return (ht->array[element_index]->value);
		return (NULL);
	}
	else
	{
		if (ht->array[element_index]->next == NULL)
			return (NULL);
		temp = (hash_node_t *)malloc(sizeof(hash_node_t));
		if (temp == NULL)
			return (NULL);
		temp = ht->array[element_index]->next;
		while (temp->next != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
