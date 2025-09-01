#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: the size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
return;
}
{
for (i = 1; i <= size; i++)
{
for (j = 0; j < size; j++)
_putchar(' ');
for (j = 0; j < i; j++)
_putchar('#');
}
_putchar('\n');
}
}
