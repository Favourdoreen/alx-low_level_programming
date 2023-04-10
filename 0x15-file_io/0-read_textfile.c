#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: filename.
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t x;
ssize_t y;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
y = read(fd, buf, letters);
x = write(STDOUT_FILENO, buf, y);

free(buf);
close(fd);
return (x);
}
