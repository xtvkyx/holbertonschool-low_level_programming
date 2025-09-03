#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: An integer input value
 * @b: An integer input value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
