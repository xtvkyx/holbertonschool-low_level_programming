#include "main.h"
/**
 * print_line - a function that draws a diagonal line in the terminal
 * @n: number of times the character _ should be printed
 * Return: nothing
 */
void print_diagonal(int n)
{
int i, j = 0;
if (n > 0)
{
for (i = 0; i < n; i++)
_putchar('\');
}
{
for (j = 0; j < i; j++)
_putchar('\');
}
_putchar('\n');
}
