#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * create_node - Creates a new node with the given string.
 * @str: The string to be stored in the node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
list_t *create_node(const char *str)
{
    list_t *new_node = malloc(sizeof(list_t));

    if (!new_node)
        return (NULL);

    new_node->str = strdup(str);

    if (!new_node->str)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = strlen(str);
    new_node->next = NULL;

    return (new_node);
}

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A double pointer to the list_t list.
 * @str: The string to put in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node = create_node(str);

    if (!new_node)
        return (NULL);

    if (!*head)
    {
        *head = new_node;
    }
    else
    {
        list_t *temp = *head;
        while (temp->next)
            temp = temp->next;
        temp->next = new_node;
    }

    return (new_node);
}

