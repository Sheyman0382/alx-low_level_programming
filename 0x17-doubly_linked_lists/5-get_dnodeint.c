#include "lists.h"

/**
 * get_dnodeint_at_index - fetch a particular node's
 * value in a doubly linked list.
 * @head: pointer to the head of the list.
 * @index: position of the element to retrieve.
 *
 * Return: value of the node targeted, or NULL if it fails.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;
	dlistint_t *temp;

	a = 0;
	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		a++;
	}
	if (index > a)
		return (NULL);
	a = 0;
	temp = head;
	while (a < index)
	{
		temp = temp->next;
		a++;
	}
	return (temp);
}
