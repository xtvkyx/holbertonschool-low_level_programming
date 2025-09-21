#include <stdio.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the first element of the array.
 * @size: number of elements (so you know how many times to loop).
 * @action: pointer to the function to apply
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
action(array[I]);
}
