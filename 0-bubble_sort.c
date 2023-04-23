#include "sort.h"
/**
 * int_swap - This function swap two integers in an array.
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
 * bubble_sort - function that sort array of int in ascending order
 * @array: Array of int.
 * @size: Array size
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, length = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	i = 0;
	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < length - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int_swap(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		length--;
	}
}	
