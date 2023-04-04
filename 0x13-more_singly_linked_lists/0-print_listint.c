#include"lists.h"

/**
 * print_listint - prints items in the linked list
 * @h: stucture of a node of the list
 * Return: unsigned int
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
