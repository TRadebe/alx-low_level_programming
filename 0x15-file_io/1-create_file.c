#include "main.h"
#include <unistd.h>

/**
* create_file - creates a new file with specified text content
* @filename: the name of the file to create
* @text_content: the text to write to the file
*
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int fd, res_write, i;

if (filename == NULL) /* validate filename input */
return (-1);

/* Open the file with O_CREAT and O_WRONLY, and set the file permissions */
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1) /* check for open() error */
return (-1);

if (text_content != NULL) /* if content is not NULL, write to file */
{
for (i = 0; text_content[i] != '\0'; i++)
			;
res_write = write(fd, text_content, i);
if (res_write == -1) /* check for write() error */
return (-1);
}
close(fd); /* close the file descriptor */
return (1);
}
