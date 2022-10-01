#include "main.h"

/**
 * _islower - checks if the character is lowercase
 * @c: an integer to be checked
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
