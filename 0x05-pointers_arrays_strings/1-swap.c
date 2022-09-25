#include "main.h"

/**
 * swap_int - swaps the value of two integers using their pointers
 * @a: a pointer variable input
 * @b: a pointer variable input
 */
void swap_int(int *a, int *b)
{
int n, m;
n = *b;
m = *a;
*a = n;
*b = m;
}
