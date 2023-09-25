#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - tri les valeurs avec l'algo 'bubble'
 *
 * @array: la liste des entiers
 * @size: la longueur de la liste
*/
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;

	if (size == 1)
		printf("%d\n", array[0]);

	if (size > 1)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < (size - 1); i++)
			{
				if (array[i] > array[i + 1])
				{
					tmp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = tmp;
					print_array(array, size);
				}
			}
		}
	}
}
