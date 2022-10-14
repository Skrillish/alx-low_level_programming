#include "3-calc.h"
#include <stdio.h>

/**
 * main - accepts user arguments and performs mathematical
 * operation on them
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: prints out the result of the calculation
 */
int main(int argc, char *argv[])
{
int calc, num1, num2;
int (*func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

func = get_op_func(argv[2]);
if (func == NULL || argv[2][1])
{
printf("Error\n");
exit(99);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

calc = func(num1, num2);
if (calc == -99)
{
printf("Error\n");
exit(100);
}

printf("%i\n", calc);
return (0);
}
