#include "sort.h"
/**
 * selection_sort - Sorts a array of integers in ascending order
 * using the selection sort algorithm
 * @array: Tha array to be sorted
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min_size, temp;

for (i = 0; i < size; i++)
{
min_size = i;
for (j = i + 1; j < size; j++)
{
	/* compare min_size avec chaque elements du tableau */
	if (array[min_size] > array[j])
	{
		temp = array[min_size];
		array[min_size] = array[j];
		array[j] = temp;
		print_array(array, size);
	}
}
}
}
