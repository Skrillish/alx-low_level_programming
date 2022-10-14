#include <stdlib.h>


/**
 * op_add - adds two integers together
 * @a: first integer
 * @b: second integer
 * Return: sum of integers
 */
int op_add(int a, int b)
{
int sum;
sum = a + b;
return (sum);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of the two integers
 */
int op_sub(int a, int b)
{
int diff;
diff = a - b;
return (diff);
}

/**
 * op_mul - multiplies two numbers together
 * @a: first number
 * @b: second number
 * Return: the multiple of the two integers
 */
int op_mul(int a, int b)
{
int mul;
mul = a * b;
return (mul);
}

/**
 * op_div - divides two numbers
 * @a: first integer to divide
 * @b: divisor integer
 * Return: value of division of a by b
 */
int op_div(int a, int b)
{
int division;

if (b == 0)
return (-99);

division = a / b;
return (division);
}

/**
 * op_mod - performs modular arithmetic with two integers
 * @a: first integer
 * @b: divisor integer
 * Return: result of the division
 */
int op_mod(int a, int b)
{
int mod;

if (b == 0)
return (-99);

mod = a % b;
return (mod);
}
