#include"lists.h"

/**
 * free_listint2 - free the list
 * @head: pointer to the 1st node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	/* loop throug the list */
	while (*head != NULL)
	{
		/* assign current node to temp */
		temp = *head;
		/* move to the next node */
		*head = (*head)->next;
		/* free the current node */
		free(temp);
	}
	*head = NULL;
}
