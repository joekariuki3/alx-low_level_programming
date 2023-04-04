#include"lists.h"

/**
 * pop_listint - deleted the headnode of a list
 * @head: pointer to the headnode of the list
 * Return: headnode integer or headnode data of the removed node
 */
int pop_listint(listint_t **head)
{
	int rmNodeData;
	listint_t *temp;

	/* Check if list is empty*/
	if (*head == NULL)
		return (0);
	/* save 1st node data to my variable*/
	rmNodeData = (*head)->n;
	/* save 1st node to temp */
	temp = *head;
	/* assign second node to head */
	*head = (*head)->next;
	/* free the 1st node that we had saved to temp */
	free(temp);
	/* Return the saved data from the 1st node one we have just removed*/
	return (rmNodeData);
}
