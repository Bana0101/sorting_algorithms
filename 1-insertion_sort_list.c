#include "sort.h"

/**
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *p = *list, *temp, *tmp;

	if (list == NULL)
		return;

	while (p->next != NULL)
	{
		p = p->next;
		temp = p;
		while (p->prev != NULL && p->n < p->prev->n)
		{
			tmp = p->prev;
			tmp->next = p->next;
			if (p->next)
				p->next->prev = tmp;
			p->next = tmp;

			p->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = p;
			tmp->prev = p;
			print_list(*list);
		}
		p = temp;
	}
}
