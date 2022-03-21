#include "sort.h"
/**
 * counting_sort - Sorts an array in ascending order
 * @array: Array
 * @size: Pointer to the previous element of the list
 *
 * Description: Sorts an array of integers in ascending
 * order using the Counting sort algorithm
 * Return: Void
 */
void counting_sort(int *array, size_t size)
{
	int *count, *output;
	size_t max, i = 0;

	if (!array || !size || size < 2)
		return;
	max = array[0];
	while (i < size)
	{
		if (array[i] > (int) max)
			max = array[i];
		i++;
	}
	count = malloc(sizeof(int) * (max + 1));
	if (!count)
		return;
	output = malloc(sizeof(int) * (size));
	if (!output)
		return;
	for (i = 0; i <= max; i++)
		count[i] = 0;
	for (i = 0; i < size; i++)
		count[array[i]] += 1;
	for (i = 1; i <= max; i++)
		count[i] += count[i - 1];
	print_array(count, max + 1);
	for (i = size - 1; (int) i >= 0; i--)
	{
		output[count[array[i]] - 1] = array[i];
		count[array[i]] -= 1;
	}
	for (i = 0; i < size; i++)
		array[i] = output[i];
	free(output);
	free(count);
}
