#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	int i = 0, check = 0, j = 0;

	while(1)
	{
		check = 0;
		for(i = 0; i < size - 1; i++)
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
