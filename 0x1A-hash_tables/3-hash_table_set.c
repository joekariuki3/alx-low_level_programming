#include"hash_tables.h"
/**
 * createNode - creates a new node
 * @key: string to use as key
 * @value: dtring to use as value
 * Return: pointer to the node or NULL
 */
hash_node_t *createNode(const char *key, const char *value)
{
	hash_node_t *element = NULL;

	element = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (NULL);
	element->key = strdup(key);
	if (value == NULL)
	{
		element->value = NULL;
	}
	element->value = strdup(value);
	element->next = NULL;

	return (element);
}
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table to add the element
 * @key: is the string to add to the hash table
 * @value: is the string connecter to the key it can be NULL
 * Return: int 1 for sucess and 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element_root = NULL;
	unsigned long int element_index = 0;

	unsigned const char *key_u = NULL;

	element_root = createNode(key, value);
	if (element_root == NULL)
		return (0);
	key_u = malloc(sizeof(key));
	if (key_u == NULL)
		return (0);
	key_u = (unsigned const char *) key;/* cast to unsigned const int*/
	element_index = key_index(key_u, ht->size);/*get the index */
	if (ht->array[element_index] == NULL)
		/*check if current index is empty (no colision) add item*/
	{
		ht->array[element_index] = element_root;
		return (1);
	}
	else /*index is ocupied there is colision of it is an update */
	{
		if ((strcmp(ht->array[element_index]->key, key)) == 0 &&
				(strcmp(ht->array[element_index]->value, value) != 0))
		{
			/* do update */
			strcpy(ht->array[element_index]->value, value);
			return (1);
		}
		else
		{
			/*Now its colision add node at front */
			element_root->next = ht->array[element_index];
			ht->array[element_index] = element_root;
			return (1);
		}
	}
	return (0);
}
