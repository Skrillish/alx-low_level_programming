#include "function_pointers.h"


/**
 * int_index - call a function on each element and return the index
 * of the element in the array that first returns True when
 * passed to the function
 * @array: array containing integers
 * @size: length of array
 * @cmp: pointer to function
 * Return: index of the first element to return True or -1
 * otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL)
return (-1);

if (size < 1)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
