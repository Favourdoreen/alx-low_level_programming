#include "lists.h"

/**
 * sum_listint - returns the sum of all the datia in a listint_t list
 * @head: first node in the linked list
 *
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
