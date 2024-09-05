#include "lists.h"

/**
*free_listint2 - frees a linked list
*@head: pointer to the head of the list
*
*Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next_node;

	temp = *head;
	while (temp != NULL)
	{
		next_node = temp->next;
		free(temp);
		temp = next_node;
	}
	*head = NULL;
}
