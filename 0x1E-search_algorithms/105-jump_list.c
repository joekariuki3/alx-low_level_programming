#include"search_algos.h"

/**
 * jump_list - search for valur in link list using jump search
 * @list: pointer to the header of the  list
 * @size: number of elements in the list
 * @value: the integet to look for in the list
 * Return: return pointer to the value or NULL if value is missing
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int i = 0, jump = 0;
	listint_t *current = NULL, *prev = NULL;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);
	current = list;

	/*Perform the jump search*/
	while (current->index < size - 1 && current->n < value)
	{
		prev = current;
		for (i = 0; i < jump && current->next != NULL; i++)
			current = current->next;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	/*Perform linear search in the block*/
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);
	while (prev != NULL && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
