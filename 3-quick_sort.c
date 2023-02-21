#include "sort.h"
/**
 * quick_sort - entry point for the quick sort algorithm
 * @array: the pointer to the array
 * @size: the size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1);
}
/**
 * quicksort - implementation of the algorithm
 * @array: pointer to the array location
 * @start: start index of the array
 * @end: end index of the array
 * Return: nothing
 */
void quicksort(int *array, int start, int end)
{
	int pIndex;

	if (start < end)
	{
		pIndex = lomuto_partition(array, start, end);
		quicksort(array, start, pIndex - 1); /*The left partition segment*/
		quicksort(array, pIndex + 1, end); /*The right partition segment*/
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
int lomuto_partition(int *array, int start, int end)
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
		}
	}
	/* swap(array[i], array[pindex]);*/
	temp = array[i];
	array[i] = array[pIndex];
	array[pIndex] = temp;
	return (pIndex);
}

