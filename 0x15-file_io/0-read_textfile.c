#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Scan text file print to STDOUT.
 * @filename: word file being read
 * @letters: quantity of letters be read
 * Return: d- actual number of bytes read and printed
 * 0 when function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t cf;
ssize_t d;
ssize_t x;

fd = open(filename, O_RDONLY);
if (cf == -1)
return (0);
buf = malloc(sizeof(char) * letters);
x = read(cf, buf, letters);
d = write(STDOUT_FILENO, buf, x);

free(buf);
close(cf);
return (d);
}
