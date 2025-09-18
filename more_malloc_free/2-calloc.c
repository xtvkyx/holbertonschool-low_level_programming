#include <stdlib.h>
#include <limits.h>
/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated and zero-initialized memory.
 * NULL if nmemb or size is 0, or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size;
unsigned int i;
char *char_ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

if (size > UINT_MAX / nmemb)
{
return (NULL);
}
total_size = nmemb * size;

ptr = malloc(total_size);

if (ptr == NULL)
{
return (NULL);
}
char_ptr = (char *)ptr;
for (i = 0; i < total_size; i++)
{
char_ptr[i] = 0;
}
return (ptr);
}
