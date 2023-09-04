#include "main.h"

/**
 * create_file - Makes a file.
 * @filename: A pointer to the name of file to make.
 * @text_content: A pointer to string to put down to the file.
 * Return: -1 If function fails
 */
int create_file(const char *filename, char *text_content)
{
int cf, d, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

cf = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
d = write(cf, text_content, len);

if (cf == -1 || d == -1)
return (-1);

close(cf);

return (1);
}
