#include "main.h"

/**
 * _isalpha - checks if the input is an alphabet
 * @c: integer input
 * Return: 1 if it is an alphabet character, 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
return (1);
else if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
