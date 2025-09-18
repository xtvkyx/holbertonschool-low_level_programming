#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 * if malloc fails, the function terminate the process
 * with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
