#include "sort.h"

/**
 * quick_sort - in ascending order using the Quick Sort algorithm
 * @array: an array of ints
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	int i = 0, j = size - 1, tmp;

	while (i < j)
	{
		while (array[i] <= array[0])
			i++;
		while (array[j] > array[0])
			j--;
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}
	print_array(array, size);
	tmp = array[j];
	array[j] = array[0];
	array[0] = tmp;
	print_array(array, size);
}
