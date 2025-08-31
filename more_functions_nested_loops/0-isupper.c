#include "main.h"
#include <stdio.h>
/**
 * _isupper - uppercase letters
 *@c character to check
 *
 * Return: 1 if c is uppercase otherwise Return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
