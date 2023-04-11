#include "main.h"

/**
* get_bit - return value of a bit at the index in  decimal number
* @n: number to search
* @index: index of the bit
*
* Return:thee value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit_value;
/* if statement condition that states what the indwx ahould be */
if (index > 63)
return (-1);
/* the value of the bit should be determined as follows */
bit_value = (n >> index) & 1;
return (bit_value);
}
