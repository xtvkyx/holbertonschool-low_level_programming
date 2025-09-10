#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @n: An input integer
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (_sqrt(1, n));
}
