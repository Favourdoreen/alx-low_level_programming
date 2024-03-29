#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *next, *prev;
if (head == NULL || *head == NULL)
return(NULL);

prev = NULL;

while ((*head)->next != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
(*head)->next = prev;
return (*head);
}
