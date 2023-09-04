#include "main.h"

/**
 * append_text_to_file - changes text at the end of  file.
 * @filename: A pointer to the name of file.
 * @text_content: The string to add at the end of file.
 * Return: -1 if function fails or filename is NULL.
 * -1 If the file does not exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int r, z, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

r = open(filename, O_WRONLY | O_APPEND);
z = write(r, text_content, len);

if (r == -1 || z == -1)
return (-1);

close(r);

return (1);
}
