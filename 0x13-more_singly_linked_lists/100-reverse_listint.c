#include "lists.h"
/**
 * reverse_listint - Reverse a `listint_t` linked list
 * @head: double pointer to head
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *hold;
	listint_t *current;

	if (*head == NULL || head == NULL)
		return (NULL);

	current = *head;
	*head = current->next;
	hold = (*head)->next;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (hold != NULL)
	{
		(*head)->next = current;
		current = *head;
		*head = hold;
		hold = (*head)->next;
	}

	(*head)->next = current;
	return (*head);
}
