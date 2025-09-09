#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: input string
 * @needle: characters to look for
 * Return: a pointer to the beginning of the located substring, or NULL if none
 */
char *_strstr(char *haystack, char *needle)
{
char *startn = needle, *starth = haystack;
while (*haystack)
{
starth = haystack;
needle = startn;
while (*haystack == *needle)
{
haystack++;
needle++;
}
if (*needle == '\0')
return (starth);
haystack = starth + 1;
}
return (NULL);
}
