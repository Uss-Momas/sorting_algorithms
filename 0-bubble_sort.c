#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * bubble_sort - implementation of the bubble sort algorithm
 * @array: the pointer to the array list
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int aux;

	if (size >= 2)
	{
		for (i = 0; i < size; i++)
		{
			for (j = i + 1; j < size; j++)
			{
				if (array[i] > array[j])
				{
					aux = array[i];
					array[i] = array[j];
					array[j] = aux;
					print_array(array, size);
				}
			}
		}
	}
}
