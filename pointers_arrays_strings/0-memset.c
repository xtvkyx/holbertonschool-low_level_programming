#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @n: fill the first function
 * @s: bytes of the memory area
 * @b: constant byte
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *start = s;
while (n--)
{
*s = b;
s++;
}
return (start);
}
