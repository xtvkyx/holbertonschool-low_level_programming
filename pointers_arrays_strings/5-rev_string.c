#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 *
 * Return: void
 */
void rev_string(char *s)
{
    int left = 0, right = 0;
    char tmp;

    while (s[right] != '\0')
        right++;
    right--;

    while (left < right)
    {
        tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
}
