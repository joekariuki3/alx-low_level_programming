#include"lists.h"

/**
 * insert_nodeint_at_index - inserts a node at index n
 * @head: pointer to the 1st node of the list
 * @idx: position or index the new node should be added
 * @n: the value to be added in the list
 * Return: pointer to the new node that has been added in index idx
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode,  *temp;

	/* check if the list is empty if yes we return NULL */
	if (head == NULL)
		return (NULL);
	temp = *head;
	/* loop throug the list til one node idx */
	for (i = 1; temp && i < idx; i++)
	{
		temp = temp->next;
		/* check if we reach end of list */
		if (temp == NULL)
			return (NULL);
	}
	/* asign memory to the newnode*/
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	/* assign n to the new node*/
	newnode->n = n;
	if (idx == 0)
	{
		*head = newnode;
		newnode->next = temp;
	}
	else if (temp->next)
	{
		/* asign temp next value to new node next value*/
		newnode->next = temp->next;
		/* assign temp next value to be address of newnode*/
		temp->next = newnode;
	}
	else
	{
		newnode->next = NULL;
		temp->next = newnode;
	}
	return (newnode);
}
