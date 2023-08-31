#include "main.h"

/**
 * clear_bit - sets value of given bit to 0
 * @n: pointer to number change
 * @index: index of bit
 *
 * Return: 1 success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
