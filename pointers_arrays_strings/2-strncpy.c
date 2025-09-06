#include "main.h"
/**
 * _strncpy - copies up to n characters from one string to another
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
