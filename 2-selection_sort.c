#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
size_t n, i, j, minim;
int temp;
n = size;
if (array == NULL || size < 2)
return;
for (i = 0; i < n - 1; i++)
{
minim = i;
for (j = i + 1; j < n; j++)
{
if (array[j] < array[minim])
minim = j;
}
if (minim != i)
{
temp = array[i];
array[i] = array[minim];
array[minim] = temp;
print_array(array, size); }}}
