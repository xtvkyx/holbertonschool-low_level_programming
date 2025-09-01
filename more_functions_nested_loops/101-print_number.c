#include "main.h"
void print_integer(int m);

/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: Nothing
 */
void print_number(int n)
{
if (n == 0)
_putchar('0');
else if (n < 0)
{
_putchar('-');
m = (unsigned int)(-n);
}
else
m = (unsigned int)n;
}
/**
 * print_integer - A function to priting n
 * @m: an input unsigned integer
 * Return: Nothing
 */
void print_integer(unsigned int m)
{
unsigned int i = 1000000000;

while (i >= 1)
{
if (m / i != 0 || i == 1)
_putchar((m / i) % 10 + '0');
i /= 10;
}
}
