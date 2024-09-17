#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Double pointer to the head of the list
 *
 * Return: The head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	/* Save the head node data and move the head pointer to the next node */
	temp = *head;
	n = temp->n;
	*head = (*head)->next;

	/* Free the old head node */
	free(temp);

	return (n);
}

