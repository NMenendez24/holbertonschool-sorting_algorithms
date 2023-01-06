#include "sort.h"

/**
 * insertion_sort_list - Sorts a list using the insertion algorithm
 * @list: A pointer to a pointer to the head of a list
 */
void insertion_sort_list(listint_t **list)
{
	int i;
	listint_t *head = *list, *head2, *buf, *dup = head;

	while (head)
	{
		dup = head;
		i = head->n;
		head2 = head;
		head = head->next;
		while (head2)
		{
			buf = head2;
			if (i < head2->n)
			{
				while (buf && (buf->n != i))
				{
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
					if (buf->prev)
						buf = buf->prev;
					print_list(*list);
				}
			}
			head2 = head2->prev;
		}
	}
}
