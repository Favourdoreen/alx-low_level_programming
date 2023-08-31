#include "main.h"

/**
 * flip_bits - counts the number bits
 * from one number to another
 * @n: third number
 * @m: forth number
 *
 * Return: bits of number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (j = 64; j >= 0; j--)
{
current = exclusive >> j;
if (current & 1)
count++;
}

return (count);
}
