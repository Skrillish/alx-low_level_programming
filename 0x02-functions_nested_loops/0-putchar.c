#include <stdio.h>
#include "main.h"

/**
 * main - entrypoint
 *
 * Description: Print _putchar
 *
 * Return: Always 0
 */

int main(void)
{
char name[10] = "_putchar";

int i;

for (i = 0; i < 8; i++)
{
_putchar(name[i]);
}
_putchar(10);
return (0);
}
