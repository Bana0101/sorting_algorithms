#include "sort.h"

/**
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *swaped;
	size_t flag = 1;

	swaped = *list;
	while (flag)
	{
		flag = 0;
		current = swaped;
		while(current->next)
		{
			if (current->n > current->next->n)
			{
				swaped = current->next;
				while (current != NULL)
				{
					if (current->n < swaped->n)
						break;
					current = current->prev;
				}
				if (!swaped->next)
					swaped->prev->next = NULL;
				else
				{
					swaped->prev->next = swaped->next;
					swaped->next->prev = swaped->prev;
				}
				if (!current)
				{
					swaped->next = *list;
					(*list)->prev = swaped;
					*list = swaped;
					swaped->prev = NULL;
				}
				else
				{
					swaped->next = current->next;
					current->next->prev = swaped;
					current->next = swaped;
					swaped->prev = current;
				}
				print_list(*list);
				flag = 1;
				break;
			}
			current = current->next;
		}
	}
}
/*
 * swaped->next = current->next;
	
				current->next->prev = swaped;
				current->next = swaped;
				swaped->prev = current;
*/	



