#include "main.h"

/**
 * flip_bits - counts the number bits to swap
 * to obtain from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: bits of number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int ip, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (ip = 63; ip >= 0; ip--)
{
current = exclusive >> ip;
if (current & 1)
count++;
}

return (count);
}
