#include "sort.h"
/**
 * int_swap - this function swaps two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void int_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: Array size.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *minimum;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minimum = array + i;
		for (j = i + 1; j < size; j++)
			minimum = (array[j] < *minimum) ? (array + j) : minimum;

		if ((array + i) != minimum)
		{
			int_swap(array + i, minimum);
			print_array(array, size);
		}
	}
}
