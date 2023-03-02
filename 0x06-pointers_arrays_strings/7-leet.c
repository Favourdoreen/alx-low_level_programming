#include "main.h"
/**
 * leet - encode into 1337speak
 * @str: input value
 * Return: n value
 */
char *leet(char *str)
{
int indx1 = 0, indx2;
char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[indx1])
{
for (indx2 = 0; indx2 <= 7; indx2++)
{
if (str[indx1] == leet[indx2] ||
str[indx1] - 32 == leet[indx2])
str[indx1] = indx2 + '0';
}
indx1++;
}
return (str);
}
