#include "main.h"

/**
 * get_endianness - checks whether the machine is big or little endian
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
unsigned int b = 1;
char *s = (char *) &b;
if (*s)
return (1); /* little endian */
else
return (0); /* big endian */
}
