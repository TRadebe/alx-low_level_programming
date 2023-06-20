# Dynamic Library Functions

This project contains a set of dynamic library functions implemented in the C programming language.
These functions provide various utility operations such as character manipulation, string manipulation, and type checking.

## Table of Contents

- [Description](#description)
- [Functions](#functions)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Description

The project consists of the following functions:

- `_putchar`: Writes a character to the standard output (stdout).
- `_islower`: Checks if a character is lowercase.
- `_isalpha`: Checks if a character is an alphabetic character.
- `_abs`: Computes the absolute value of an integer.
- `_isupper`: Checks if a character is uppercase.
- `_isdigit`: Checks if a character is a digit.
- `_strlen`: Computes the length of a string.
- `_puts`: Writes a string to the standard output (stdout).
- `_strcpy`: Copies a string from source to destination.
- `_atoi`: Converts a string to an integer.
- `_strcat`: Concatenates two strings.
- `_strncat`: Concatenates two strings up to n characters.
- `_strncpy`: Copies a string up to n characters.
- `_strcmp`: Compares two strings.
- `_memset`: Fills a block of memory with a specified value.

## Functions

Each function is implemented in a separate file with a corresponding name. The files are structured as follows:

```c
#include "main.h"

/**
 * Function description
 *
 * @param param1: Description of parameter 1
 * @param param2: Description of parameter 2
 * ...
 * @return: Description of the return value
 */
return_type function_name(parameter_type param1, parameter_type param2, ...) {
    // Function implementation
}


To use these functions, follow the steps below:

Clone the repository: git clone <repository-url>
Compile the dynamic library using the provided Makefile: make
Include the corresponding header file in your C program: #include "main.h"
Link your program with the dynamic library during compilation:
gcc -Wall -Werror -Wextra -pedantic -std=c89 -o program_name program_name.c -L. -lfunctions
Make sure to replace program_name with the name of your C program.
