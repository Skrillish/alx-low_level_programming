#include "main.h"

/**
 * times_table - prints out the 9 times table
 * Return: none
 */
void times_table(void)
{
int i, j, k;
i = 0;
while (i < 10)
{
_putchar(48);
j = 1;
while (j < 10)
{
k = (j *i);
_putchar(44);
_putchar(32);
if (k < 10)
{
_putchar(32);
_putchar(k + 48);
/* 48 is ascii 0 so k + 48 is the number in ascii form */
}
else
{
_putchar(k / 10 + 48);
_putchar(k % 10 + 48);
}
j++;
}
_putchar('\n');
i++;
}
}
