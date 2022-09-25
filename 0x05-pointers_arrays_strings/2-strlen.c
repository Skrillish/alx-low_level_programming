#include "main.h"

/**
 * _strlen - finds the length of a string by accessing it with the pointer
 * @s: a pointer for array of characters(string)
 * Return: length of the string
 */
int _strlen(char *s)
{ /* pointers actually stores the address of the first element of the array */
int n;
for (n = 0; *(s + n) != '\0'; n++)
continue;
return (n);
}
