#include "main.h"

/**
 * _pow_recursion - calculate a number raised to power of another number using
 * recursion
 * @x: base number
 * @y: power of the base number
 * Return: x raised to power y or -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0 || x == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
