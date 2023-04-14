#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* string_functions.c */
int string_length(char *str);
char *string_copy(char *dest, const char *src);
char *string_concatenate(char *dest, const char *src);

/* file_functions.c */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* linked_list.c */
typedef struct Node Node;

Node *create_node(int data);
Node *add_node(Node *head, int data);
Node *delete_node(Node *head, int data);
void print_list(Node *head);

#endif
