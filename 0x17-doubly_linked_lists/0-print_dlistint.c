#include "lists.h"

/**
 * print_dlistint - a function that prints a list
 * @h: a pointer to the list to be printed
 *
 * Return: the length of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
