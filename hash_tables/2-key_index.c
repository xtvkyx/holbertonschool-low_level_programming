#include "hash_tables.h"
/**
 * key_index - gives the index of a key in the hash table
 * @key: the string key to hash
 * @size: the number of buckets in the hash table
 *
 * Return: the index where the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;
unsigned long int index;
hash = hash_djb2(key);
/* convert hash to index in the hash table */
index = hash % size;

return (index);
}
