#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node, starting at 0
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	/* Traverse the list to find the node at the given index */
	while (head != NULL)
	{
		if (i == index)
			return (head);  /* Return the node at index */
		head = head->next;
		i++;
	}

	/* If the node does not exist, return NULL */
	return (NULL);
}

