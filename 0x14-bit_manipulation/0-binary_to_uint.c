#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing binary number
 *
 * Return: number converted
 */
unsigned int binary_to_uint(const char *b)
{
int ip;
unsigned int dec_val = 0;

if (!b)
return (0);

for (ip = 0; b[ip]; ip++)
{
if (b[ip] < '0' || b[ip] > '1')
return (0);
dec_val = 2 * dec_val + (b[ip] - '0');
}

return (dec_val);
}
