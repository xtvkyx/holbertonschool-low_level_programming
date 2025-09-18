#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string (destination)
 * @s2: second string (source)
 * @n: The number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string.
 * NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat_str;
unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++
while (s2[len2]
len2++
if (n >= s2)
n = len2;
concat_str = malloc(sizeof(char) * (len1 + n + 1));
if (concat_str == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
concat_str[i] = s1[i];
}
for (j = 0; j < n; j++)
{
concat_str[i + j] = s2[j];
}
concat_str[i + j] = '\0';
return (concat_str);
}
