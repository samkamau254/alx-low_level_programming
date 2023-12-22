#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: The hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	char *delim = "";

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", delim, temp->key, temp->value);
			delim = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
