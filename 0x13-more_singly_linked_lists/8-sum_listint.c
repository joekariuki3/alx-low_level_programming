#include"lists.h"

/**
 * sum_listint - sums items in the linked list
 * @head: poiner to the 1st node in the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != 0)
	{
		sum = sum + head->n; 
		head = head->next;
	}
	return (sum);
}
