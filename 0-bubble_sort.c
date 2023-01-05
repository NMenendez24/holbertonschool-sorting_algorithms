#include "sort.h"

/**
  * bubble_sort - Sorts an array of integers
  * @size: Size of the array
  * @array: Array to sort
  */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, check = 0;
	int j = 0;

	while (1)
	{
		check = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] <= array[i + 1])
				check++;
			else
			{
				j = array[i];
				array[i] = array[i + 1];
				array[i + 1] = j;
				print_array(array, size);
			}
		}
		if (check == size - 1)
			return;
	}
}
