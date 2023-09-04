#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int cf);

/**
 * create_buffer - Allocates 1024 bytes for  buffer.
 * @file: The name of the file is storing chars for.
 * Return: A pointer to the new allocated buffer.
 */
char *create_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (buffer);
}

/**
 * close_file - Closes file
 * @cf: The file descriptor to be closed.
 */
void close_file(int cf)
{
int z;

z = close(cf);

if (z == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close cf %d\n", cf);
exit(100);
}
}

/**
 * main - Copies the contents of a file.
 * @argc: number of arguments supplied to the program.
 * @argv: An array of pointers
 * Return: 0 on success.
 * Description: If argument count is incorrect - exit code 97.
 * If file_from does not exist - exit code 98.
 * If file_to cannot be  written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int fr, tt, rr, ww;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = create_buffer(argv[2]);
fr = open(argv[1], O_RDONLY);
rr = read(fr, buffer, 1024);
tt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (fr == -1 || rr == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

ww = write(tt, buffer, rr);
if (tt == -1 || ww == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

rr = read(fr, buffer, 1024);
tt = open(argv[2], O_WRONLY | O_APPEND);

} while (rr > 0);

free(buffer);
close_file(fr);
close_file(tt);

return (0);
}
