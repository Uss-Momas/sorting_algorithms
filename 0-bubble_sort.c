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
			for (j = 0; j < size - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					aux = array[j];
					array[j] = array[j + 1];
					array[j + 1] = aux;
					print_array(array, size);
				}
			}
		}
	}
}
