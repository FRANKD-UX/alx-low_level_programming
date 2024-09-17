#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Double pointer to the head of the list
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next_node = NULL;

	while (*head != NULL)
	{
		/* Save the next node */
		next_node = (*head)->next;
		/* Reverse the pointer of the current node */
		(*head)->next = prev;
		/* Move prev and head one step forward */
		prev = *head;
		*head = next_node;
	}
	/* Update head to the new first node */
	*head = prev;

	return (*head);
}

