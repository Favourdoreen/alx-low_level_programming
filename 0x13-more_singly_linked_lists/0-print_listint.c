#include "lists.h"

/**
 * print_listint - prints elements of linked list
 * @h: pointer to the head of the listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (nodes);
}
