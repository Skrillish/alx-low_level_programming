#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string literal
 * Return: none
 */
void puts_half(char *str)
{
int count = 0, i;

while (count >= 0)
{
if (str[count] == '\0')
break;
count++;
}

if (count % 2 == 0)
i = count / 2;
else
i = (count + 1) / 2;

for (; i < count; i++)
_putchar(str[i]);
_putchar('\n');
}
