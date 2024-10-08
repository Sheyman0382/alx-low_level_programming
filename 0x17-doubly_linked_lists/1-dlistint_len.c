#include "lists.h"

/**
 * dlistint_len - a function that prints a list
 * @h: a pointer to the list to be printed
 *
 * Return: the length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
