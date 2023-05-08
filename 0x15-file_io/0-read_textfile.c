#include "main.h"

/**
* read_textfile - Reads a text file and prints it to standard output
*
* @filename: The name of the file to read
* @letters: The number of letters to read and print
*
* Return: The actual number of letters read and printed, or 0 on failure
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
/* Check if filename is null */
if (filename == NULL)
return (0);

/* Open file for reading */
FILE *file = fopen(filename, "r");
if (file == NULL)
return (0);

/* Allocate memory for buffer */
char *buffer;
buffer = malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
fclose(file);
return (0);
}

/* Read from file into buffer */
size_t bytes_read = fread(buffer, sizeof(char), letters, file);
if (bytes_read == 0)
{
fclose(file);
free(buffer);
return (0);
}

/* Write buffer to standard output */
ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != (ssize_t) bytes_read)
{
fclose(file);
free(buffer);
return (0);
}

/* Clean up and return number of bytes written */
fclose(file);
free(buffer);
return (bytes_written);
}
