#include"lists.h"

/**
 * add_nodeint - add a new node at the beginning of thr list
 * @head: pointer containing adress of the 1st node in the element
 * @n: the int value we want to add to the list
 * and stored in the n field of the node
 * Return: returns the pointer of the new node added in the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
