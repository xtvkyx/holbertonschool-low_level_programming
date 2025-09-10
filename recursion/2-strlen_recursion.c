#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: input of a string to printing
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
if (*s)
return (1 + _strlen_recursion(s + 1));
return (0);
}
