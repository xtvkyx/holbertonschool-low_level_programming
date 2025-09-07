#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @n: number of bytes
 * @dest: destination to copy
 * @src: the source to copy from
 * Return: Returns a pointer to the memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *start = *dest;
{
while (n--)
{
*dest = *src;
*src++;
*dest++;
}
return (*start);
}
