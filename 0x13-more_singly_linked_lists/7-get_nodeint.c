#include "lists.h"

/**
 * get_nodeint_at_index - returns the node in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;
for (node = 0; node < index; node++)
{
if (temp == NULL)
return (NULL);

temp = temp->next;
}

return (temp);
}
