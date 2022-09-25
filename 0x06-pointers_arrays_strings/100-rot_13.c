#include "main.h"

/**
 * rot13 - rotate each letter to 13 spaces forward
 * @str: string to be operated on
 * Return: address to the string
 */
char *rot13(char *str)
{
int i = 0, j = 0;
char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (str[i] != '\0')
{

for (j = 0; j < 52; j++)
{

if (str[i] == letter[j])
{
str[i] = rot13[j];
break;
}

}

i++;
}

return (str);
}
