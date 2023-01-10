#include "sort.h"

/**
 * quick_sort - A function that calls another more useful function
 * @array: See recursive description.
 * @size: See recursive description.
 */

void quick_sort(int *array, size_t size)
{
	recursive(array, size, array, size);
}

/**
 * recursive - A functions that sorts an array using quicksort.
 * @array: The array to be sorted.
 * @size: Size of the array.
 * @originalArray: A pointer to the start of the array for recursion.
 * @originalS: The size of the array for recursion.
 */
void recursive(int *array, size_t size, int *originalArray, size_t originalS)
{
	size_t i, j = 0;
	int n = 0;

	for (i = 0; i < size; i++)
	{
		if (array[size - 1] >= array[i])
		{
			if (i != j)
			{
				n = array[i];
				array[i] = array[j];
				array[j] = n;
				print_array(originalArray, originalS);
			}
			j++;
		}
	}
	if (j > 2)
		recursive(array, j - 1, originalArray, originalS);
	if ((size - j + 1) > 2)
		recursive(array + j, size - j, originalArray, originalS);
}
