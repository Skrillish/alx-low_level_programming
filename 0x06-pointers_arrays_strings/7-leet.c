#include "main.h"

/**
 * leet - replaces some letters with numbers
 * @str: string to replace its letters
 * Return: address of string
 */
char *leet(char *str)
{
char replace[] = "aAeEoOtTlL";
char replacement[] = "4433007711";
int i = 0, j = 0;

while (*(str + i) != '\0')
{
for (j = 0; j < 10; j++)
{
if (*(str + i) == replace[j])
*(str + i) = replacement[j];
}

i++;
}

return (str);
}
