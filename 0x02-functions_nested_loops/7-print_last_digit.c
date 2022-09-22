#include "main.h"

/**
 * print_last_digit - returns the last digit of an integer
 * @c: integer input
 * Return: the last digit of the input
 */
int print_last_digit(int c)
{
c %= 10;
if (c < 0)
{
_putchar(-c + 48);
return (-c);
}
else
{
_putchar(c + 48);
return (c);
}
}




























