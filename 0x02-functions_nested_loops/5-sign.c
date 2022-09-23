#include "main.h"

/**
 * print_sign - checks if the number is negative positive or zero
 * @n: the integer to be checked
 * Return: 0 if n is 0, 1 if n is positive, -1 if n is negative
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar(48);
return (0);
}
else if (n > 0)
{
_putchar(43);
return (1);
}
_putchar(45);
return (-1);
}
 
