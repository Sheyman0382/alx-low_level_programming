#include "lists.h"

/**
 * insert_dnodeint_at_index - Adds a new node at a given
 * index of a doubly linked list.
 * @h: Double pointer to the head of the list.
 * @n: Value to insert into the new node.
 * @idx: the index at which the newnode will be inserted.
 *
 * Return: Address of the new element, or NULL if it fails.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int a = 0;
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (idx == 0)
	{
		newnode->next = *h;
		if (*h != NULL)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}

	temp = *h;
	while (temp != NULL)
	{
		temp = temp->next;
		a++;
	}
	if (idx >= a)
	{
		free(newnode);
		return (NULL);
	}
	a = 0;
	temp = *h;
	while (a < idx)
	{
		temp = temp->next;
		a++;
	}
	newnode->next = temp;
	newnode->prev = temp->prev;
	temp->prev->next = newnode;
	temp->prev = newnode;
	return (newnode);
}

