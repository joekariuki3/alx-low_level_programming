#include "lists.h"

/**
* dlistint_len - prints number of elements in alist
* @h: pointer to the start of the list
* Return: signed int
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current = h;
size_t count = 0;

while (current != NULL)
{
count++;
current = current->next;
}
return (count);
}
