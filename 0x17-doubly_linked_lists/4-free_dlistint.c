#include "lists.h"

/**
 * free_dlistint - a function that frees all element in a doubly linked list.
 * @head: a pointer to the head of the list.
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		free(temp->prev);
	}
	free(temp);
}
