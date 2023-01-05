#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	int i;
	listint_t *head = *list, *head2, *buf;

	while (head)
	{
		head2 = head;
		i = head->n;
		while (head2)
		{
			if (i < head2->n)
			{
				buf = head2;
			}
			head2 = head2->prev;
		}
		if (head->prev)
			head->prev->next = head->next;
		if (head->next)
			head->next->prev = head->prev;
		head->next = buf;
		if (head2->prev)
		{
			head->prev = buf->prev;
			buf->prev->next = head;
		}
		buf->prev = head;
		print_list(*list);
		head = head->next;
	}
}
