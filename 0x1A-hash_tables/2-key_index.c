#include"hash_tables.h"
/**
 * key_index - calculates the position to put data in the array
 * @key: provided key string
 * @size: size of the array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0, index = 0;

	if (key != NULL && size != 0)
	{
		hash = hash_djb2(key);
		index = hash % size;
		return (index);
	}
	return (0);
}
