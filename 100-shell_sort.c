#include "sort.h"
/**
* shell_sort - sorts an array of integers using
* the shell sort algorithm with Knuth sequence
* @array: the array of integers
* @size: size of the array
* Return: none
*/
void shell_sort(int *array, size_t size)
{
	size_t n = 0, j, i;
	int tmp;

	if (size < 2)
		return;

	while ((n = n * 3 + 1) < size)
		;

	n = (n - 1) / 3;

	for (; n > 0; n = (n - 1) / 3)
	{
		for (i = n; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= n && tmp <= array[j - n]; j -= n)
				array[j] = array[j - n];
			array[j] = tmp;
		}
		print_array(array, size);
	}
}
