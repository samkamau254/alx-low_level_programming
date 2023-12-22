#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: The hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cur, *prev;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		prev = ht->array[i];
		while ((cur = prev) != NULL)
		{
			prev = prev->next;
			free(cur->key);
			free(cur->value);
			free(cur);
		}
	}
	free(ht->array);
	free(ht);
}
