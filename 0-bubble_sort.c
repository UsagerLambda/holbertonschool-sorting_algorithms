#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the bubble sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: The number of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;

/* décrement chaque fois que j à fini de parcourir la liste */
/* et à donc placé le chiffre le plus élevé en dernier */
for (i = size - 1; i > 0; i--)
{
	/* parcours le tableau */
	for (j = 0; j < i; j++)
	{
		/* compare la position suivante avec l'actuel */
		if (array[j + 1] < array[j])
		{
			/* sauvegarde le chiffre actuel */
			int temp = array[j];

			/* le chiffre actuel prend la valeur du chiffre suivant */
			array[j] = array[j + 1];
			/* le chiffre suivant prend la valeur de temp*/
			array[j + 1] = temp;
		}
	}
}
}
