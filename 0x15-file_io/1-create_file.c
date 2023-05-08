#include "main.h"

/**
* create_file - creates a new file with specified text content
* @filename: the name of the file to create
* @text_content: the text to write to the file
*
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int fd, res_write, J;
mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH; /*permissions*/

if (filename == NULL) /* validate filename input */
return (-1);

/* Open the file with O_CREAT and O_WRONLY, and set the file permissions */
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
if (fd == -1) /* check for open() error */
return (-1);

if (text_content != NULL) /* if content is not NULL, write to file */
{
for (J = 0; text_content[J] != '\0'; J++)
;
res_write = write(fd, text_content, J);
if (res_write == -1) /* check for write() error */
{
close(fd);
return (-1);
}
}

close(fd); /* close the file descriptor */
return (1);
}
