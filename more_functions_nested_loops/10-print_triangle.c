#include "main.h"
/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
return;
}
for (i = 1; i <= size; i++)
{
for (j = 0; j < size - i; j++)
_putchar(' ');
for (j = 0; j < i; j++)
_putchar('#');
_putchar('\n');
}
_putchar('\n');
}
}
