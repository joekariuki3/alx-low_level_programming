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

	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
	{
		free(element);
		return (NULL);
	}
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

	if (ht == NULL || key == NULL)
		return (0);
	element_root = createNode(key, value);
	if (element_root == NULL)
		return (0);
	key_u = (unsigned const char *) strdup(key);/* cast to unsigned const int*/
	if (key_u == NULL)
		return (0);
	element_index = key_index(key_u, ht->size);/*get the index */
	if (ht->array[element_index] == NULL)/*check current index is empty add item*/
	{
		ht->array[element_index] = element_root;
		clean(NULL, key_u);
		return (1);
	}
	else /*index is ocupied there is colision of it is an update */
	{
		if ((strcmp(ht->array[element_index]->key, key)) == 0 &&
				(strcmp(ht->array[element_index]->value, value) != 0))
		{
			strcpy(ht->array[element_index]->value, value);/* do update */
			clean(NULL, key_u);
			return (1);
		}
		else
		{
			element_root->next = ht->array[element_index];/*colision add node front*/
			ht->array[element_index] = element_root;
			clean(NULL, key_u);
			return (1);
		}
	}
	clean(element_root, key_u);
	return (0);
}

/**
 * clean - free memory
 * @element_root: node
 * @key_u: copy of key string
 */
void clean(hash_node_t *element_root, unsigned const char *key_u)
{
	if (key_u != NULL)
	{
		free((void *) key_u);
		return;
	}
	if (element_root->key != NULL)
	{
		free(element_root->key);
	}
	if (element_root->value != NULL)
	{
		free(element_root->value);
	}
	if (element_root != NULL)
	{
		free(element_root);
	}
}
