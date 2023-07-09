#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the hash table
 *
 * Return: pointer to the new hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}

/**
 * shash_table_set - adds a key-value pair to a sorted hash table
 * @ht: pointer to the hash table
 * @key: key to add
 * @value: value to add
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	node = createsNode(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	addToSortedList(ht, node);
	return (1);
}
/**
 * createsNode - creates a new node
 * @key: string to use as key
 * @value: dtring to use as value
 * Return: pointer to the node or NULL
 */
shash_node_t *createsNode(const char *key, const char *value)
{
	shash_node_t *element = NULL;

	element = malloc(sizeof(shash_node_t));
	if (element == NULL)
	{
		free(element);
		return (NULL);
	}
	element->key = strdup(key);
	if (value == NULL)
		element->value = NULL;
	element->value = strdup(value);
	element->next = NULL;
	element->sprev = NULL;
	element->snext = NULL;

	return (element);
}

/**
 * addToSortedList - adds element to the sorted list
 * @ht: hash table with head and tail of list
 * @node: node to add to the list
 */
void addToSortedList(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp = NULL;

	if (ht->shead == NULL)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(node->key, ht->shead->key) < 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, node->key) < 0)
			temp = temp->snext;
		node->sprev = temp;
		node->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = node;
		else
			temp->snext->sprev = node;
		temp->snext = node;
	}

}


/**
 * shash_table_get - retrieves a value associated with a key from
 * a sorted hash table
 * @ht: pointer to the hash table
 * @key: key to search for
 *
 * Return: value associated with the key, or NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: pointer to the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (temp = ht->shead; temp != NULL; temp = temp->snext)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->snext != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse order
 * @ht: pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (temp = ht->stail; temp != NULL; temp = temp->sprev)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->sprev != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: pointer to the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}

	free(ht->array);
	free(ht);
}
