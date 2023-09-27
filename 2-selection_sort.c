#include "sort.h"

/**
 * selection_sort - Using selection sorting algorithm
 *
 * @array: an array of integers
 * @size: size of the array
 * Return: none
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index;
	int min;

	if (array == NULL || size == 0)
		return;

	if (size == 1)
	{
		print_array(array, size);
		return;
	}
	for (i = 0; i < (size - 1); i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				index = j;
			}
		}
		if (min != array[i])
		{
			array[index] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
