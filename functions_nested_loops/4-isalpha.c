#include "main.h"
/**
 * _islower - checks if a character is alphabetic
 * @c: character code to check
 *
 * Return: 1 if c is 'a'..'z', otherwise 0
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
