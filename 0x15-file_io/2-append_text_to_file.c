#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* create_file - Creates a file with a given filename and writes a given string
* to it
*
* @filename: the name of the file to create
* @text_content: the NULL terminated string to write to the file
*
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int fd, i, len = 0;

if (!filename) /* if filename is NULL */
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
/* open the file with write-only, create and truncate modes
* set permissions to rw------- (0600)
*/

if (fd == -1) /* if the file can not be created */
return (-1);

if (text_content) /* if there is text to write to the file */
{
for (i = 0; text_content[i]; i++)
len++;
}

if (write(fd, text_content, len) == -1) /* write the string to the file */
{
close(fd);
return (-1);
}

close(fd);

return (1);
}
