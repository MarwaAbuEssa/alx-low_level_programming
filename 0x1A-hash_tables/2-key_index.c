#include "hash_tables.h"

/**
 *  * key_index -  index at which a key/value
 * @key: The key of index
 * @size:  size of the array
 * Return: index of the key.
 * Description: djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
