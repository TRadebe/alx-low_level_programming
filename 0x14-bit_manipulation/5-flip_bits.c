#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to navigate between numbers
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int inuse;
unsigned long int exclusive = n ^ m;
/* for loop*/
for (i = 63; i >= 0; i--)
{
inuse = exclusive >> i;
if (inuse & 1)
count++;/* add by 1 */
}
return (count);
}
