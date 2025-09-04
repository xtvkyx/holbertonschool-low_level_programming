#include "main.h"
/**
 * rev_string - reverse a string.
 * @s: input string
 * Return: void
 */
void rev_string(char *s)
{
int i = 0, j = 0;
char temp;

while (s[i] != '\0')
{
i++;
}
i = i - 1
while (j < i)
{
temp = s[j];
s[j] = s[i];
s[i] = temp;

j++;
i--;
}
}
