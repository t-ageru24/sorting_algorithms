#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j, n;
int temp;
if (array == NULL || size < 2)
return;
n = size;
for (i = 0; i < n - 1; i++)
{
for (j = 0; j < n - 1 - i; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size); }}}}
