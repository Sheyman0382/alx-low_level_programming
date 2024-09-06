#include "lists.h"

/**
*print_listint_safe - a function that prints a list recusively
*@head: pointer to the head of the list
*
*Return: void
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count;

	if (head == NULL)
	{
		count = 0;
		return (count);
	}
	else
	{
		printf("%d\n", head->n);
		print_listint_safe(head->next);
	}
	return (count);
}
