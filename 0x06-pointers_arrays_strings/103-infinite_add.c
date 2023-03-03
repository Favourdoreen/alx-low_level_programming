#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - adds the number stored in two strings
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @r_index: the current index of the buffer
 *
 * Return: if r can store the sum - a pointer to the result
 * if r cannot store the sum - 0
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
int num, tens = 0;
for (; *n1 && *n2; n1--, r_index--)
{
	num = (*n1 - '0') + (*n2 - '0');
	num += tens;
	*(r + r_index) =(num % 10) + '0';
	tens = num / 10;
}
for (; *n1
{
i++;
}
i--;

for (j = 0; j < i; j++, i--)
{
temp = *(n + j);
*(n + j) = *(n + i);
*(n + i) = temp;
}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int overflow = 0, i = 0, j = 0, digits = 0;
int val1 = 0, val2 = 0, temp_tot = 0;

while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
}
