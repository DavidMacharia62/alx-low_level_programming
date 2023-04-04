#include "lists.h"

/**
 * find_listint_loop - This function finds the loop 
 * 			in a linked list.
 *
 * @head: head of the list to be parsed through.
 *
 * Return: An address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pa;
	listint_t *pre;

	pa = head;
	pre = head;
	while (head && pa && pa->next)
	{
		head = head->next;
		pa = pa->next->next;

		if (head == pa)
		{
			head = pre;
			pre =  pa;
			while (1)
			{
				pa = pre;
				while (pa->next != head && pa->next != pre)
				{
					pa = pa->next;
				}
				if (pa->next == head)
					break;

				head = head->next;
			}
			return (pa->next);
		}
	}

	return (NULL);
}
