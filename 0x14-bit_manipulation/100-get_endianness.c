#include "main.h"

/**
* get_endianness - checks wether the machine is small or big endianness
*
* Return: 0 if big. else 1 for 
*/

int get_endianness(void)
{
unsigned int b = 1;
/* assigned variable s and returned it*/
char *s = (char *) &b;

return (*s);
}
