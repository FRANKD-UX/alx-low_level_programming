#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list and handles loops.
 * @h: A pointer to the pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;
	listint_t *slow, *fast;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = *h;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = *h;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			break;
		}
	}

	while (*h && (*h != slow || count == 0))
	{
		current = *h;
		*h = (*h)->next;
		free(current);
		count++;
	}
	*h = NULL;

	return (count);
}

