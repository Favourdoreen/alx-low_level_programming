#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer of an unsigned long int.
 * @index: index of the bit to set
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int l;
if (index > 63)
return (-1);

l = 1 << index;
*n = (*n | l);

return (1);
}
