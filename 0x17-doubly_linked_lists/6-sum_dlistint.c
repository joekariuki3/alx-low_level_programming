#include"lists.h"
/**
* sum_dlistint- add elements of alist
* @head: pointer to start of the list
* Return: sum of the list
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
int sum = 0;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}

