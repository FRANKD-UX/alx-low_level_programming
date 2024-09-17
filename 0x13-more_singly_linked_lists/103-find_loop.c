#include "lists.h"

/**
 * find_listint_loop - finds the start of a loop in a linked list
 * @head: pointer to the head of the list
 *
 * Return: the address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL)
		return (NULL);

	/* Move slow by one step and fast by two steps */
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		/* If they meet, there's a loop */
		if (slow == fast)
		{
			listint_t *start = head;

			/* Find the start of the loop */
			while (start != slow)
			{
				start = start->next;
				slow = slow->next;
			}
			return (start);
		}
	}

	/* No loop found */
	return (NULL);
}

