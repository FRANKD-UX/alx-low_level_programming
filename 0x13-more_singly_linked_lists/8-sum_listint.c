#include "lists.h"

/**
 * sum_listint - Sums all the data (n) of a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all data (n) in the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	/* Traverse the list, adding the data (n) of each node */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

