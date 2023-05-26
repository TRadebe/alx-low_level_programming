#include "main.h"

int append_text_to_file(const char *filename, char *text_content);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: 0 on success, 1 on failure.
 */

int main(int argc, char *argv[])
{
int res;

if (argc != 3)
{
fprintf(stderr, "Usage: %s filename text\n", argv[0]);
exit(1);
}

res = append_text_to_file(argv[1], argv[2]);
printf("-> %i\n", res);

return (0);
}
