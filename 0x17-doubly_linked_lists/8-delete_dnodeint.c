#include"lists.h"

/**
 * delete_dnodeint_at_index - delete node at certain index
 * @head: pointer to the headnode of the list
 * @index: position to delete the element
 * Return: 1 for sucess -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	count = 0;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (count < index)
	{
		current = current->next;
		count++;
		if (current == NULL)
			return (-1);  /* Invalid index */
	}
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
