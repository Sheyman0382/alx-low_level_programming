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
	dlistint_t *newnode, *temp = *h;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
		return (newnode);
	}
	while (temp != NULL && a < idx)
	{
		temp = temp->next;
		a++;
	}
	if (temp == NULL || (temp->next == NULL && a + 1 != idx))
	{
		free(newnode);
		return (NULL);
	}
	if (temp->next == NULL)
		newnode = add_dnodeint_end(h, n);
	else
	{
		newnode->next = temp;
		newnode->prev = temp->prev;
		temp->prev->next = newnode;
		temp->prev = newnode;
	}
	return (newnode);
}
