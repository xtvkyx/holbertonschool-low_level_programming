#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to the head node
 * @idx: index where the new node should be added (starting at 0)
 * @n: value to store in the new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *temp;
unsigned int i = 0;

if (h == NULL)
return (NULL);

if (idx == 0)
return (add_dnodeint(h, n));

temp = *h;

while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}

if (temp == NULL)
return (NULL);


new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = temp;
new_node->next = temp->next;


if (temp->next != NULL)
temp->next->prev = new_node;

temp->next = new_node;

return (new_node);
}
