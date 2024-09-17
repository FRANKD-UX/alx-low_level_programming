#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list, including loops
 * @h: double pointer to the head of the list
 *
 * Return: the size of the list that was free’d
 * Sets the head to NULL after freeing the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = *h;

	while (slow)
	{
		count++;
		temp = slow;
		slow = slow->next;
		free(temp);

		if (fast && fast->next)
		{
			fast = fast->next->next;
			if (slow == fast)
			{
				/* If a loop is detected, free remaining part */
				while (slow != fast->next)
				{
					temp = slow;
					slow = slow->next;
					free(temp);
					count++;
				}
				free(slow);
				count++;
				break;
			}
		}
		else
		{
			fast = NULL;
		}
	}

	*h = NULL; /* Set head to NULL after freeing the list */
	return (count);
}

