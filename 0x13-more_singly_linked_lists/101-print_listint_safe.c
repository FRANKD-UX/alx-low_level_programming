#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list, detecting loops
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 * If the function fails, exit with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	if (!head)
		exit(98);

	slow = head;
	fast = head;

	while (slow)
	{
		count++;
		printf("[%p] %d\n", (void *)slow, slow->n);

		slow = slow->next;
		if (fast && fast->next)
		{
			fast = fast->next->next;
			if (slow == fast)
			{
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				return (count);
			}
		}
		else
			fast = NULL;
	}
	return (count);
}

