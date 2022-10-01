#include "main.h"

/**
 * _abs - makes all integer positive
 * @c: an integer
 * Return: returns the absolute value of c
 */
int _abs(int c)
{
if (c < 0)
c *= -1;
return (c);
}
