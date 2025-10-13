#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of a dlistint_t list.
 * @h: pointer to the head of the list
 * @str: pointer to string that adds as node
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%lu] %s\n", h->len, h->str);
count++;
h = h->next;
}
return (count);
