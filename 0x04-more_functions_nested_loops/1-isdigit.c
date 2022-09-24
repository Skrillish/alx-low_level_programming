#include "main.h"

/**
 * _isdigit - checks if integer input matches an ascii number
 * @c: integer input
 * Return: 1 if input is a digit and 0 otherwise
 */
int _isdigit(int c)
{
if (c > 47 && c < 58)
return (1);
return (0);
}
