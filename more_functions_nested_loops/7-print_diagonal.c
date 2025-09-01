#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line in the terminal
 * @n: number of times the character _ should be printed
 * Return: nothing
 */
void print_diagonal(int n)
{
int i = 0, int j = 0;
if (n > 0)
{
for (; i < n; i++)
{
for (j = 0; j < i; j++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
else
_putchar('\n');
}
