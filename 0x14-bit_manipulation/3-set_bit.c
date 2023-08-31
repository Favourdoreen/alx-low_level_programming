#include "main.h"

/**
 * set_bit - sets bit to given index to 1
 * @n: pointer to the number change
 * @index: index starting from 0
 *
 * Return: 1 success, -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
