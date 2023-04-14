#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];
 
// Check arguments
if (argc != 3) {
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

// Open source file
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1) {
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

// Truncate or create target file
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1) {
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}

// Copy content
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read) {
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}
}

// Handle read errors
if (bytes_read == -1) {
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

// Close files
if (close(fd_from) == -1 || close(fd_to) == -1) {
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno);
exit(100);
}
return 0;
}
