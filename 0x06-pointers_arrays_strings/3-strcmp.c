#include "main.h"

/**
 * _strcmp - compares two strings and return the ascii value
 * of their subtraction in the first character they differ
 * @s1: first string
 * @s2: second string
 * Return: the ascii value of their subtraction
 */
int _strcmp(char *s1, char *s2)
{
int diff = 0;
int i = 0;

while (s1[i] != '\0')
{

if (s1[i] != s2[i])
{
diff = s1[i] - s2[i];
break;
}

i++;
}
return (diff);
}
