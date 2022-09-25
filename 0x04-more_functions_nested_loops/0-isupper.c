#include "main.h"

/**
 * _isupper - checks if input is an uppercase letter
 * @c: decimal equivalent of the character
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);
return (0);
}
