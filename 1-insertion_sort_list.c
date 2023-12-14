#include "sort.h"

/**
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *swaped;
	size_t flag = 1;

	while (flag)
	{
		flag = 0;
		current = *list;
		while(current->next)
		{
			if (current->n > current->next->n)
			{
				swaped = current->next;
				while (current->n > swaped->n && current->prev != NULL)
					current = current->prev;


			}
}
