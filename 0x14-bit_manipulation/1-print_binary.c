#include "main.h"

/**
* print_binary -will print the binary == of a decimal number
*
* @n: numb that wil be printed in binary
*/

void print_binary(unsigned long int n)
{
int s, count = 0;
unsigned long int inuse;

for (s = 63; i >= 0; s--)
{
inuse = n >> s;
/* if and else if statement condition*/
if (inuse & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
