#include "sort.h"
/**
 * selection_sort - Sorting through selection sort method
 * @array: sort array
 * @size: size arr
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t j, i, num;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		num = i;
		for (j = (i + 1); j < size; j++)
		{
			if (array[num] > array[j])
				num = j;

		}
		if (num != i)
		{
			swap_numbers(&array[i], &array[num]);
			print_array(array, size);
		}
	}
}

/**
 * swap_numbers - swap numbers
 * @a: 1st number to swap
 * @b: 2nd number to sap
 * Return: Nothing
 */
void swap_numbers(int *a, int *b)
{
	int as = 0;

	as = *a;
	*a = *b;
	*b = as;
}
