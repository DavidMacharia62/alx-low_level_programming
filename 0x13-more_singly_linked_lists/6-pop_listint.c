#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Else - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int retn;

	if (*head == NULL)
		return (0);

	temp = *head;
	retn = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (retn);
}
