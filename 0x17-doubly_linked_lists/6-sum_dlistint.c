#include "lists.h"

/**
 * sum_dlistint - sums all the integers in a doubly linked list.
 * @head: pointer to the head of the list.
 *
 * Return: the addition of all integers in the loop.
 */

int sum_dlistint(dlistint_t *head)
{
	int data_sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		data_sum += temp->n;
		temp = temp->next;
	}
	return (data_sum);
}
