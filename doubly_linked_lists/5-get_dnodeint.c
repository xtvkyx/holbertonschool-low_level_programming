#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to the head node
 * @index: index of the node starting from 0
 * Return: pointer to the nth node, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head != NULL)
{
if (i == index)
return (head);

head = head->next;
i++;
}

return (NULL);
}
