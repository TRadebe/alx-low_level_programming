/**
 * set_bit - sets a bit to a given index to 1
 * @n: points to the number that is to change
 * @index: index for  bit to set to 1
 *
 * Return: 1 for success.else -1
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
/* if condition statement */
if (index > 63)
return (-1);
/* i used the assigned long version of 1 */
*n = ((1UL << index) | *n);
return (1);
}
