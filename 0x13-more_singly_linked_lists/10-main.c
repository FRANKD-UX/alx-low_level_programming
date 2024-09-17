#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_and_delete - Prints the list and deletes a node at a specific index
 * @head: Pointer to the pointer to the head of the list
 * @index: Index of the node to delete
 */
void print_and_delete(listint_t **head, unsigned int index)
{
    print_listint(*head);
    printf("-----------------\n");
    delete_nodeint_at_index(head, index);
}

/**
 * main - Entry point for the program
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);

    print_and_delete(&head, 5);
    print_and_delete(&head, 0);
    print_and_delete(&head, 0);
    print_and_delete(&head, 0);
    print_and_delete(&head, 0);
    print_and_delete(&head, 0);
    print_and_delete(&head, 0);
    print_and_delete(&head, 0);
    print_and_delete(&head, 0);
    print_and_delete(&head, 0);
    print_and_delete(&head, 0);
    print_and_delete(&head, 0);
    print_and_delete(&head, 0);
    print_and_delete(&head, 0);
    print_and_delete(&head, 0);

    return (0);
}

