#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: An input string to be printed between strings
 * @n: number of parameters
 * @...: Other parameters
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(args);
printf("\n");
}
