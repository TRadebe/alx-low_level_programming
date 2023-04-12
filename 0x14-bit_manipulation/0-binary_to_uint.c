#include "main.h"

/**
* binary_to_uint - gives a binary number to unsigned integer
* @b: string containing the binary number
*
* Return: given number
*/
unsigned int binary_to_uint(const char *b)
{
int s;/*int assigned s*/
unsigned int dec_value = 0;
/* if statement condition*/
if (!b)
return (0);
for (i = 0; b[s]; s++)
{
/* second if statement condition*/
if (b[s] < '0' || b[s] > '1')
return (0);
dec_value = 2 * dec_value + (b[s] - '0');
}
return (dec_value);
}
