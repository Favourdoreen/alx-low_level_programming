#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: return 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (*head == NULL)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
temp = *head;
return (num);
}
