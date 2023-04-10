#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @from: from.
 * @to: to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int from, int to, char *argv[])
{
if (from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
/**
 * main - Copies the contents of a file to another file.
 * @argc: number of arguments
 * @argv: array of pointers to the arguments.
 * Return: Always 0.
 * If the argument count is incorrect - exit code 97.
 * If from does not exist or cannot be read - exit code 98
 * If to cannot be created or written to - exit code 99.
 *  If to or from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
int from, to, err_close;
ssize_t nchars, nwr;
char buf[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
from = open(argv[1], O_RDONLY);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(from, to, argv);
nchars = 1024;
while (nchars == 1024)
{
nchars = read(from, buf, 1024);
if (nchars == -1)
error_file(-1, 0, argv);
nwr = write(to, buf, nchars);
if (nwr == -1)
error_file(0, -1, argv);
}
err_close = close(from);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
err_close = close(to);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
return (0);
}
