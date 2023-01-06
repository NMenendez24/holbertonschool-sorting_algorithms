#include "sort.h"

/**
 * insertion_sort_list - Sorts a list using the insertion algorithm
 * @list: A pointer to a pointer to the head of a list
 */
void insertion_sort_list(listint_t **list)
{
	int i, check;
	listint_t *head = *list, *head2, *buf, *dup = head;

	while (head)
	{
		dup = head;
		check = 0;
		head2 = head;
		buf = head;
		i = head->n;
		while (head2)
		{
			if (i < head2->n)
			{
				check = 1;
				buf = head2;
			}
			head2 = head2->prev;
		}
		head = head->next;
		if (check == 0)
			continue;
		if (dup->prev)
			(dup->prev)->next = dup->next;
		if (dup->next)
			(dup->next)->prev = dup->prev;
		dup->next = buf;
		if (buf->prev)
		{
			dup->prev = buf->prev;
			(buf->prev)->next = dup;
		}
		buf->prev = dup;
		if ((*list)->prev)
		{
			*list = (*list)->prev;
			(*list)->prev = NULL;
		}
		print_list(*list);
	}
}
