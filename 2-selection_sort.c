#include "sort.h"
#include <stdlib.h>
/**
 * selection_sort - selection sort algorithm implementation
 * @array: the array containing the elements to sort
 * @size: the size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index, aux;
	int swapped;

	if (size >= 2)
	{
		for (i = 0; i < size; i++)
		{
			swapped = 0;
			min_index = i;
			for (j = i; j < size - 1; j++)
			{
				if (array[min_index] > array[j + 1])
				{
					swapped = 1;
					min_index = j + 1;
				}
			}
			if ((i + 1 != size) && swapped == 1)
			{
				aux = array[min_index];
				array[min_index] = array[i];
				array[i] = aux;
				print_array(array, size);
			}
		}
	}
}
