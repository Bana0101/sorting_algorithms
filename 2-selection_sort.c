#include "sort.h"

/**
 * selection_sort - in ascending order using the Selection algorithm
 * @array: an array of ints
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, small, sw;

	if (!array || size <= 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		sw = 0;
		small = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[small])
			{
				sw = 1;
				small = j;
			}
		}
		tmp = array[i];
		array[i] = array[small];
		array[small] = tmp;
		if (sw)
			print_array(array, size);
	}

}
