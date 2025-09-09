#include "main.h"
/**
 * _strpbrk -a function that searches a string for any of a set of bytes.
 * @s: an input string
 * @accept: character to look for
 * Return: pointer to first matching byte in s, or NULL if none
 */
char *_strpbrk(char *s, char *accept)
{
char *a;
while (*s)
{
a = accept;
while (*a)
{
if (*s == *a)
return (s);
a++;
}
s++;
}
return (NULL);
}
