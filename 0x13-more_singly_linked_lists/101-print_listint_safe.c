#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - print lists with a loop
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: number of nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *turtle, *hare2;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

turtle = head->next;
hare2 = (head->next)->next;

while (hare2)
{
if (turtle == hare2)
{
turtle = head;
while (turtle != hare2)
{
nodes++;
turtle = turtle->next;
hare2 = hare2->next;
}
turtle = turtle->next;
while (turtle != hare2)
{
nodes++;
turtle = turtle->next;
}
return (nodes);
}
turtle = turtle->next;
hare2 = (hare2->next)->next;
}
return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;

nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}
