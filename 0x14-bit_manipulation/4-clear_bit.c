#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number to change
 * @index: index of the bit.
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int l;

if (index > 63)
return (-1);

l = 1 << index;

if (*n & l)
*n ^= l;

return (1);
}
