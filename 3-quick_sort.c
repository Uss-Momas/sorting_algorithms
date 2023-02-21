#include "sort.h"
/**
 * quick_sort - entry point for the quick sort algorithm
 * @array: the pointer to the array
 * @size: the size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size >= 2)
		quicksort(array, 0, size - 1, size);
}
/**
 * quicksort - implementation of the algorithm
 * @array: pointer to the array location
 * @start: start index of the array
 * @end: end index of the array
 * Return: nothing
 */
void quicksort(int *array, int start, int end, size_t size)
{
	int pIndex;

	if (start < end)
	{
		pIndex = lomuto_partition(array, start, end, size);
		quicksort(array, start, pIndex - 1, size); /*The left partition segment*/
		quicksort(array, pIndex + 1, end, size); /*The right partition segment*/
	}
}

/**
 * lomuto_partition - partition implementation for the quick sort
 * algorithm
 * @array: the pointer to the original array
 * @start: start index of the array
 * @end: end index of the array
 * Return: the pivot index
 */
int lomuto_partition(int *array, int start, int end, size_t size)
{
	int pivot, pIndex, i, temp;

	pivot = array[end];
	pIndex = start;
	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			/* swap(array[i], array[pIndex]);*/
			temp = array[i];
			array[i] = array[pIndex];
			array[pIndex] = temp;
			pIndex++;
			print_array(array, size);
		}
	}
	/* swap(array[i], array[pindex]);*/
	temp = array[i];
	array[i] = array[pIndex];
	array[pIndex] = temp;
	return (pIndex);
}

