#include "sort.h"

/**
 * bubble_sort -  sorts an array of integers in ascending order
 * @array: the array of integers
 * @size: the size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int flag = 1, swap;

	while (flag)
	{
		flag = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				for (j = 0; j < size; j++)
					printf("%d, ", array[j]);
				printf("\n");
				flag = 1;
				continue;
			}
		}
		if (flag == 0)
			break;
	}
}
