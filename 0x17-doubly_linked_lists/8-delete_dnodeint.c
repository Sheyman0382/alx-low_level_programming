#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a given
 * index of a doubly linked list.
 * @head: Double pointer to the head of the list.
 *
 * @index: The index at which the new node will be inserted.
 *
 * Return: Address of the new element, or NULL if it fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int a = 0;
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	while (temp != NULL && a < index)
	{
		temp = temp->next;
		a++;
	}

	if (temp == NULL)
		return (-1);

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		if (temp->prev != NULL)
			temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
