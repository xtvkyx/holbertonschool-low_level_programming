#include "main.h"
/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: nothing
 */
void print_numbers(void)
{
char nums[] = "0123456789\n";
int i;

for (i = 0; nums[i] != '\0'; i++)
{
_putchar(nums[i]);
}
}
