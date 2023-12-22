#include "hash_tables.h"

/**
 * add_node - creates an item based on key value pair
 * @key: The key
 * @value: Value associated with the key
 * @head: head of the hash linked list
 *
 * Return: Pointer to the array
 */
hash_node_t *add_node(char *key, char *value, hash_node_t **head)
{
	hash_node_t *temp = *head;

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*head);
		}
		temp = temp->next;
	}
	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (NULL);

	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *head;
	*head = temp;
	return (*head);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: Hash table you want to add or update the key/value to
 * @key: This is the key
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (add_node((char *)key, (char *)value, &(ht->array[index])) == NULL)
		return (0);
	return (1);
}
