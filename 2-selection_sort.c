#include "sort.h"
/**
 * selection_sort - Sorts a array of integers in ascending order
 * using the selection sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min_index;
int temp;

/*Décale i de 1 vers la droite à la fin de chaque traversée de j sur array*/
for (i = 0; i < size - 1; i++)
{
min_index = i; /* min_index se positionne sur l'élément à comparer */
/* Itére dans la partie non triée du tableau */
/* pour trouver le plus petit élément du tableau */
for (j = i + 1; j < size; j++)
{
	/* chaque fois que array[j] tombe sur un chiffre inférieur à min_index */
	if (array[j] < array[min_index])
	min_index = j; /* min_index devient j*/

}
/* Après avoir parcouru la partie non triée du tableau et trouvé (ou non) */
/* un élément plus petit que array[min_index] */
/* Effectue l'échange des éléments */
if (min_index != i)
{
	temp = array[i];
	array[i] = array[min_index];
	array[min_index] = temp;
	print_array(array, size);
}
}
}
