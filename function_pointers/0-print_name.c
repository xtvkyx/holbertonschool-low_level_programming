#include <stdio.h>
/**
 * print_name - a function that prints a name.
 *
 * @name: pointer to name to print
 * @f: function to print name
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
