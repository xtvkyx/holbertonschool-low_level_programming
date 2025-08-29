#include <stdio.h>

/**
 * main - Prints all unique third-digit combinations in ascending order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int first, second, third;
for (first = 0; first <= 9; first++)
{
for (second = 0; second <= 9; second++)
{
for (third = 0; third <= 9; third++)
{
if (first < second && second < third)
{
putchar(first + '0');
putchar(second + '0');
putchar(third + '0');
if (first != 7 || second != 8 || third != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
