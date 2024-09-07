#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely (handles loops).
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *fast, *slow;

	if (head == NULL)
		exit(98);

	slow = fast = head;

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *) slow, slow->n);
		count += 1;
		slow = slow->next;

		if (fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;

			if (fast == slow)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				printf("[%p] %d\n", (void *)slow->next, slow->next->n);
				printf("-> [%p] %d\n", (void *)fast->next->next, fast->next->next->n);
				return (count);
			}
		}
	}
	return (count);
}
