#include "main.h"

/**
 * _strcat - concatenate two strings together
 * @dest: pointer to first string
 * @src: pointer to second string
 * Return: address to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (i >= 0)
{
if (*(dest + i) == '\0')
break;
i++;
}

while (j >= 0)
{
*(dest + i) = *(j + src);
if (*(j + src) == '\0')
break;
j++;
i++;
}
return (dest);
}
