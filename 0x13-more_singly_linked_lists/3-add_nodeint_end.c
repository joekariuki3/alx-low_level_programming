#include"lists.h"

/**
 * add_nodeint_end - add a new node at the end of the list
 * @head: pointer containing adress of the 1st node in the element
 * @n: the int value we want to add to the list
 * and stored in the n field of the node
 * Return: returns the pointer of the new node added in the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	/* check if the list is empty */
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	/* use temp to go throuh the list */
	temp = *head;
	/* go throuh the list till the end node */
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/* add the new node to the end */
	temp->next = newnode;
	return (newnode);
}
