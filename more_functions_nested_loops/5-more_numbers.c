#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: nothing
 */
void more_numbers(void)
{
int i, j;
char line[] = "01234567891011121314\n";
for (i = 0; i < 10; i++)
{
for (j = 0; line[j] != '\0'; j++)
_putchar(line[j]);
}
}
