#include"lists.h"

/**
* get_dnodeint_at_index - get element from index x
* @head: pointer to ist element in the list
* @index: position of element to retrieve
* Return: element at index x
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
unsigned int count = 0;

while (current != NULL)
{
if (count == index)
{
return (current);
}

current = current->next;
count++;
}

return (NULL);
}

