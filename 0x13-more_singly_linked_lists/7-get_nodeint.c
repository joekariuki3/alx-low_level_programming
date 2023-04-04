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

	/* check if list is empty */
	if (head == NULL)
		return (NULL);
	/* loop throug nodes in the list */
	while (head != NULL)
	{
		count++;
		head = head->next;
		if (count == index)
		{
			return (head);
		}
	}
	if (index > count)
		return (NULL);
	return(NULL);
}
