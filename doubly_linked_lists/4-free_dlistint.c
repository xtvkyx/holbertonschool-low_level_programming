#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - a function that frees a dlistint_t list
* @head: pointer to the head node 
*/
void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
dlistint_t *tmp;
tmp = head->next;
free(head);
head = tmp;
}
}
