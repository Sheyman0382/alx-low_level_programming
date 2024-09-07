#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely (handles loops).
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t countground = 0, countmove = 0;
	const listint_t *ground, *move;

	if (head == NULL)
		exit(98);

	move = head;

	while (move != NULL)
	{
		printf("[%p] %d\n", (void *)move, move->n);
		move = move->next;
		countmove++;
		countground = 0;
		ground = head;

		while (countground < countmove)
		{
			if (move == ground)
			{
				printf("[%p] %d\n", (void *)move, move->n);
				return (countmove);
			}
			ground = ground->next;
			countground++;
		}
	}
	return (countmove);
}
