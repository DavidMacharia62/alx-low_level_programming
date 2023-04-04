#include "lists.h"

/**
 * sum_listint - Function to calculate the sum of all the
 *               data (n) in a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: If the list is empty - 0.
 *         Else - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum_of_list = 0;

	while (head)
	{
		sum_of_list += head->n;
		head = head->next;
	}

	return (sum_of_list);
}
