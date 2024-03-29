#include"lists.h"

/**
 * free_listint - free the list
 * @head: pointer to the 1st node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	/* loop throug the list */
	while (head != NULL)
	{
		/* assign current node to temp */
		temp = head;
		/* move to the next node */
		head = head->next;
		/* free the current node */
		free(temp);
	}
}
