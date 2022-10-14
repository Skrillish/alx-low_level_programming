#include "3-calc.h"


/**
 * get_op_func - checks if the symbol is an allowed
 * symbol and return a pointer to the corresponding function
 * @s: symbol to be checked
 * Return: pointer to the function or null if the operator
 * is not allowed
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (i < 5)
{
if (*s == *(ops[i].op))
return (ops[i].f);

i++;
}
return (NULL);
}
