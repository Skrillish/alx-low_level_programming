#include <stdio.h>

/**
 * main - prints the sum of numbers below 1024 that are divisible
 * by 5 or 3
 * Return: 0 always
 */
int main(void)
{
int i, sum = 0;
while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0)
sum += i;
i++;
}
printf("%d\n", sum);
return (0);
}

