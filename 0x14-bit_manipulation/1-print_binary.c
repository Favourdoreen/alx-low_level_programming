#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal
 * @n: number  printed in binary
 */
void print_binary(unsigned long int n)
{
int ip, count = 0;
unsigned long int current;

for (ip = 63; ip >= 0; ip--)
{
current = n >> ip;

if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
