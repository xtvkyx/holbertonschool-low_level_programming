#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
int sum = 0, n;
char c;

srand(time(NULL));

while (sum < 2772 - 126)
{
c = rand() % 94 + 33;
printf("%c", c);
sum += c;
}
n = 2772 - sum;
printf("%c", n);

return (0);
}
