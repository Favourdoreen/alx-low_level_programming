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
int fd;
ssize_t n, m;
char *buf;

if (!filename)
return (0);

fd = open(filename, O_RDONLY);

if (fd == -1)
return (0);

buf = malloc(sizeof(char) * (letters));
if (!buf)
return (0);

n = read(fd, buf, letters);
m = write(STDOUT_FILENO, buf, nrd);
close(fd);
free(buf);

return (m);
}
