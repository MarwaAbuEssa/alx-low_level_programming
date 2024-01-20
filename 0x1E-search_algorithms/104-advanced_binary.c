#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches recursively
 *                             array of integers using binary search.
 * @array: first element.
 * @left: starting index.
 * @right: ending index.
 * @value: value .
 *
 * Return: If the value is not present, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints array.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - find a value in array
 *                    using advanced binary search.
 * @array:  first element
 * @size: number of element.
 * @value: value.
 *
 * Return: no value is NULL, -1.
 *         or, the first index.
 *
 * Description: Prints array.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
