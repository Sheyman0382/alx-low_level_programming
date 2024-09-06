#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: Pointer to the head of the list.
 *
 * Return: the head pointer to the reversed linked list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next_node, *current;

	current = next_node = *head;
	while (current != NULL)
	{
		next_node = current->next;
<<<<<<< HEAD
		current->next = prev;
		prev = current;
		current = next_node;
	}
	*head = prev;
=======
		current-> = prev;
		prev = current;
		current = next_node;
	}
	head = prev;
>>>>>>> 30796474c38f83c003be8bec36147d37b820deee
}
