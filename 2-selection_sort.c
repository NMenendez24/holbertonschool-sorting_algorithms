#include "sort.h"

/**
 * selection_sort - Sorts an array
 * Return: Nothing
 * @array: Array to sort
 * @size: Size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, min = 0, aux = 0;

	for (i = 0; i < size; i++)
	{
		aux = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[aux])
				aux = j;
		}
		if (aux != i)
		{
			min = array[i];
			array[i] = array[aux];
			array[aux] = min;
			print_array(array, size);
		}
	}
}
