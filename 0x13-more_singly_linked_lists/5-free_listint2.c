#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to NULL
 *
 * @head: pointer to a pointer to the 1st element of a list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}

	*head = NULL;
}

