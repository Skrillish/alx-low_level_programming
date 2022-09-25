#include "main.h"

/**
 * _strncat - concatenate first n characters of the second string
 * to first string
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: number of characters in second string to concatenate
 * Return: address to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int j = 0, i = 0;

while (*(dest + i) != 0)
i++;

while (j < n)
{
*(dest + i) = *(src + j);
if (*(src + j) == '\0')
break;
j++;
i++;
}
if (j == n)
*(dest + i) = '\0';
return (dest);
}
