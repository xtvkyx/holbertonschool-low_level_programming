#include "main.h"

static void print_unsigned(unsigned int m);

/**
 * print_number - prints an integer using _putchar
 * @n: integer to print
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int m = (unsigned int)n;

	if (n < 0)
	{
		_putchar('-');
		m = -m; /* unsigned negation -> magnitude */
	}

	print_unsigned(m);
}

/**
 * print_unsigned - prints a nonnegative integer using _putchar
 * @m: number to print
 * Return: nothing
 */
static void print_unsigned(unsigned int m)
{
	unsigned int div = 1;

	if (m == 0)
	{
		_putchar('0');
		return;
	}

	while (m / div >= 10)
		div *= 10;

	while (div > 0)
	{
		_putchar('0' + (m / div));
		m %= div;
		div /= 10;
	}
}

