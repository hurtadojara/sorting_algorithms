#include "sort.h"
/**
 * quick_sort - function to call the function
 * @array: element to sort
 * @size: size to print arr
 * Return: Always 0
 */
void quick_sort(int *array, size_t size)
{
	int low = 0;

	if (size < 2)
		return;

	quicksort_mod(array, low, size - 1, size);
}

/**
 * quicksort_mod - function quicksort modifyed
 * @array: element to sort
 * @low: 1st number arr
 * @high: last numb arr
 * @size: size to print arr
 *
 * Return: Nothing
 */
void quicksort_mod(int *array, int low, size_t high, size_t size)
{
	int pi;

	if (low < (int)high)
	{
		pi = partition(array, low, high, size);
		quicksort_mod(array, low, pi - 1, size);
		quicksort_mod(array, pi + 1, high, size);
	}
}

/**
 * swap - function to swap two number
 * @a: first number to swap
 * @b: second number to swap
 *
 * Return: Nothing
 */
void swap(int *a, int *b)
{
	int change = 0;

	change = *a;
	*a = *b;
	*b = change;
}

/**
 * partition - function to give a pivot number
 * @array: element to sort
 * @low: 1st number arr
 * @high: last numb arr
 * @size: size to print arr
 *
 * Return: Nothing
 */
size_t partition(int *array, int low, size_t high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;

	for (j = low; j < (int)high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[high])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}
