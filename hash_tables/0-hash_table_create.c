#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table
 * @size: the number of buckets your hash table will have.
 * Return: a pointer to the newly created hash table, otherwise return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
table = malloc(sizeof(hash_table_t));
if (table == NULL)
return (NULL);
table->array = malloc(size * sizeof(hash_node_t *));

if (table->array == NULL)
{
free(table);
return (NULL);
}
unsigned long int i;
for (i = 0; i < size; i++)
table->array[i] = NULL;
return (table);
}
