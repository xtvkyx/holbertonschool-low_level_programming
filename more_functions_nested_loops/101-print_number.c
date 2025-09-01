#include "main.h"
void print_integer(unsigned int m);
/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: Nothing
 */
void print_number(int n)
{
if (n == 0)
{
_putchar('0');
return;
}
if (n < 0)
{
_putchar('-');
print_integer((unsigned int)(-(unsigned int) n));
}
else
{
print_integer((unsigned int)n);
}
}
/**
 * print_integer - A function to priting n
 * @m: an input unsigned integer
 * Return: Nothing
 */
void print_integer(unsigned int m)
{
unsigned int i = 1;
while (m / i >= 10)
i *= 10;
for (; i >= 1; i /= 10)
_putchar((m / i) % 10 + '0');
}
