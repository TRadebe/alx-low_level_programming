#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 *         If filename is NULL, return -1.
 *         If text_content is NULL, do not add anything to the file.
 *         Return 1 if the file exists and -1 if the file does not exist or
 *         if you do not have the required permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
if (filename == NULL)
return (-1);

FILE *file = fopen(filename, "a");
if (file == NULL)
return (-1);

if (text_content != NULL)
{
if (fputs(text_content, file) == EOF)
{
fclose(file);
return (-1);
}
}

if (fclose(file) == EOF)
return (-1);

return (1);
}
