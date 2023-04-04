#include"lists.h"

/**
 * get_nodeint_at_index - gets the node a index n
 * @head: pointer to the 1st node at the list
 * @index: position of the node to be returned
 * Return: returns a pointer to node at index n
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	/* check if list is empty */
	if (head == NULL)
		return (NULL);
	temp = head;
	/* loop throug nodes in the list */
	while (count < index)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		count++;
	}
	return (temp);
}
