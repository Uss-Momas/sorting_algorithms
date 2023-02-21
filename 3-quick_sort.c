#include "sort.h"
/**
 * quick_sort - entry point for the quick sort algorithm
 * @array: the pointer to the array
 * @size: the size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size >= 2 && array != NULL)
		quicksort(array, 0, size - 1, size);
}
/**
 * quicksort - implementation of the algorithm
 * @array: pointer to the array location
 * @start: start index of the array
 * @end: end index of the array
 * @size: size of the array
 * Return: nothing
 */
void quicksort(int *array, int start, int end, size_t size)
{
	int pIndex;

	if (start < end && array != NULL)
	{
		pIndex = lomuto_partition(array, start, end, size);
		if (pIndex - start > 1)
			/*The left side of pivot*/
			quicksort(array, start, pIndex - 1, size);
		if (end - pIndex > 1)
			/*The right side of pivot*/
			quicksort(array, pIndex + 1, end, size);
	}
}

/**
 * lomuto_partition - partition implementation for the quick sort
 * algorithm
 * @array: the pointer to the original array
 * @start: start index of the array
 * @end: end index of the array
 * @size: size of the array
 * Return: the pivot index
 */
int lomuto_partition(int *array, int start, int end, size_t size)
{
	int pivot, pIndex, i;

	pivot = array[end];
	pIndex = start;

	for (i = pIndex; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			if (pIndex != i)
			{
				swap(&array[pIndex], &array[i]);
				print_array(array, size);
			}
			pIndex++;
		}
	}
	if (pIndex != i)
	{
		swap(&array[pIndex], &array[end]);
		print_array(array, size);
	}
	return (pIndex);
}

/**
 * swap - swaps to elements
 * @a: the first value location
 * @b: the second value location
 * Return: nothing
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
