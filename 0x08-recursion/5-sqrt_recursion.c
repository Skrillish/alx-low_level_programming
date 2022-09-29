#include "main.h"

int _sqrt(unsigned int, unsigned int);

/**
 * _sqrt_recursion - checks the input to see if its has a natural square root
 * @n: number input
 * Return: square root of the number or -1 if it doesn't have a
 * natural square root
 */
int _sqrt_recursion(int n)
{
if (n == 1)
return (1);
else if (n > 1000000)
return (-1 * _sqrt(n, n / 300));
else if (n > 3)
return (-1 * _sqrt(n, n / 2));
return (-1);
}

/**
 * _sqrt - finds if a number has a natural square root
 * @n: number to check
 * @y: counter that reduces by one with each function call
 * Return: a number
 */
int _sqrt(unsigned int n, unsigned int y)
{
if (y * y == n)
return (-y);
else if (y <= 1)
return (1);
else
return (1 * _sqrt(n, y - 1));
}
