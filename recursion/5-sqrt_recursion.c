#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input integer
 * Return: the square root, or -1 if none
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (_sqrt(1, n));
}
/**
 * _sqrt - helper to find square root
 * @prev: current guess
 * @root: target number
 * Return: square root, or -1 if not found
 */
int _sqrt(int prev, int root)
{
if (prev > root)
return (-1);
if (prev * prev == root)
return (prev);

return (_sqrt(prev + 1, root));
}
