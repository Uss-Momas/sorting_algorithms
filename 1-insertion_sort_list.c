#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - insertion sort algorithm implementation
 * @list: pointer to the double linked list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *list, *current;
	int aux;

	if (list != NULL)
	{
		while (temp != NULL)
		{
			aux = temp->n;
			printf("%d ", aux);
			if (aux > (temp->next)->n)
			{
				current = temp;
			}
			temp = temp->next;
		}
		printf("\n");
	}
}
