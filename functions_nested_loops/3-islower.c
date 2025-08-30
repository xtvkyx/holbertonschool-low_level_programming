#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: character code to check
 *
 * Return: 1 if c is in 'a'..'z', otherwise 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
