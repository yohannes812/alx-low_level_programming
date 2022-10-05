#include "search_algos.h"

/**
 * linear_search - linear search implementation
 * @array: string
 * @size: size_t
 * @value: value
 * Return: int, index of the value
 *
 * Description: prints each array being searched
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
	return (-1);

for (i = 0; i < size; i++)
{
	printf("Value checked array[%li] = [%i]\n", i, array[i]);
	if (array[i] == value)
		return (i);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", aeeat[i]);
		print("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
