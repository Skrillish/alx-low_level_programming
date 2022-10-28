#include "main.h"


/**
 * set_bit - sets the value of a bit to 1
 * in a specific index
 * @n: pointer to a unsigned long int
 * @index: index of the bit to change
 * Return: 1 if if successful or -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;

if (index > 63)
return (-1);

m = 1 << index;
*n = (*n | m);

return (1);
}
