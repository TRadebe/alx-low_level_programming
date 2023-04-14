#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: pointer to the name of the file to read
* @letters: number of letters it should read and print
*
* Return: the actual number of letters it could read and print, or 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
/* check if filename is NULL */
if (!filename)
return (0);

/* open the file for reading */
FILE *file = fopen(filename, "r");
if (!file)
return (0);

/* read the file into a buffer */
char buffer[letters];
ssize_t bytes_read = fread(buffer, sizeof(char), letters, file);
if (bytes_read < 0)
{
fclose(file);
return (0);
}

/* write the buffer to standard output */
ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written < 0 || bytes_written != bytes_read)
{
fclose(file);
return (0);
}

/* close the file and return the number of bytes written */
fclose(file);
return (bytes_written);
}
