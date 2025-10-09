#include"lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * free_list - A function that frees all elements in a list_t list
 * @head: pointer to head element of list
 * Return: Nothing
 */
void free_list(list_t *head)
{
list_t *temp;

temp = head;

while (head)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
free(head);
}
