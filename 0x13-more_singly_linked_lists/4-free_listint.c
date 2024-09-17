#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next; /* Save the next node */
		free(head); /* Free the current node */
		head = temp; /* Move to the next node */
	}
}

