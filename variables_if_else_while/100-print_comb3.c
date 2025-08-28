#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int first, second;
for (first= 0; first <= 9; first++)
{
for (second = 0; second <= 9; second++)
{
if (second> first)
putchar(first + '0');
putchar(second + '0');
putchar(',');
putchar(' ');                                                      
}
}
putchar('\n');
return (0);
}
