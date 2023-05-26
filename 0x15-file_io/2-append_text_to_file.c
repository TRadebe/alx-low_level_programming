#include "main.h"
/**
 * append_text_to_file - apends text to a file
 * @filename: pointer to file that will be appended
 * @text_content: content to be appended to filename
 * Return: 1 for success and -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, wd;
	 int len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
	while (text_content[len])
		len++;
	}
	fd = open(filename, O_RDWR | O_APPEND);

	wd = write(fd, text_content, len);

	if (fd == -1 || wd == -1)
		return (-1);

	close(fd);
	return (1);
}
