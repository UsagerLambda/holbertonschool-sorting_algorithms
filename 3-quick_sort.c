#include "sort.h"

/**
 * lomuto_partition - Partitions an array using the Lomuto scheme
 * @array: array to be partitioned
 * @low: start of the array
 * @high: end of the array
 * @size: size of the array
 * Return: index of the pivot
 */

int lomuto_partition(int *array, int low, int high, size_t size)
{
	/* choisir le dernier élément comme pivot */
	int pivot = array[high];
	int j, temp, lom = low - 1;

	/* parcourir le tableau de low a high -1 */
	for (j = low; j <= high - 1; j++)
	{
		/* si élément actuel est inferieur au pivot */
		if (array[j] < pivot)
		{
			lom++;	/* incremente indice du plus grand élement */

			/*  échanger array(lom) et array(j) si lom et j sont different */
			if (lom != j)
			{
				temp = array[lom];
				array[lom] = array[j];
				array[j] = temp;
				
				/* affiche état actuel du tableau apres echange */
				print_array(array, size);
			}
		}
	}

	/* placer le pivot a sa position finale */
	/* apres le dernier élément plus petit */
	if (lom + 1 != high)
	{
		temp = array[lom + 1];
		array[lom + 1] = array[high];
		array[high] = temp;

		/* affiche etat actuel du tableau apres echange du pivot */
		print_array(array, size);
	}
	/* retourne indice du pivot */
	return (lom + 1);
}

/**
 * quick_sort_recursive - Recursively sorts an array using quick sort
 * @array: The array to be partitioned
 * @low: The start of the array
 * @high: The end of the array
 * @size: The size of the array
 * Return: Nothing
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	/* verifie que les indices sont valides */
	if (low < high)
	{
		/* partitionner le tableau et obtenir indice du pivot */
		int lom = lomuto_partition(array, low, high, size);

		/* Appliquer le tri rapide sur le sous-tableau gauche */
		quick_sort_recursive(array, low, lom - 1, size);

		/* Appliquer le tri rapide sur le sous-tableau droit */
		quick_sort_recursive(array, lom + 1, high, size);
	}
}

/**
 * quick_sort - Function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: The array to sort
 * @size: the size of the array
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	/*  verifie si le tableau est non NULL */
	if (array == NULL || size < 2)
		return;

	/* appel la fonction récursive pour trier le tableau */
	quick_sort_recursive(array, 0, size - 1, size);
}
