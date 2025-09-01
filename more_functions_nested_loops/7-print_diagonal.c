#include "main.h"
/**
 * print_line - a function that draws a diagonal line in the terminal
 * @n: number of times the character _ should be printed
 * Return: nothing
 */
void print_diagonal(int n)
{
int i = 0;
if (n > 0)
{
for (; i < n; i++)
_putchar('\');
}
_putchar('\n');
}
