#include"lists.h"

/**
 * listint_len - returns number of items in the linked list
 * @h: stucture of a node of the list
 * Return: unsigned int
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}
