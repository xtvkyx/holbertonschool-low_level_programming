#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: Pointer to the newly created hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
unsigned long int i;

table = malloc(sizeof(hash_table_t));
if (table == NULL)
return (NULL);

table->array = malloc(size * sizeof(hash_node_t *));
if (table->array == NULL)
{
free(table);
return (NULL);
}

for (i = 0; i < size; i++)
table->array[i] = NULL;

table->size = size;

return (table);
}
