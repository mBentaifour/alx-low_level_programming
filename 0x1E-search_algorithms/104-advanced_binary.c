#include "search_algos.h"

/**
 * advanced_binary_recursive - searches recursively for a value
 * @array: A pointer to the first element of the [sub]array to search
 * @left: The starting index of the [sub]array to search
 * @right: The ending index of the [sub]array to search
 * @value: The value to search for.
 * Return: the index where the value is located,
 *         Otherwise -1 if the value is not present.
 * Description: Prints the [sub]array being searched after each change.
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
* advanced_binary - searches for a value in a sorted array integers
* @array: A pointer to the first element of the array to search
* @size: The number of elements in the array
* @value: The value to search for.
*
* Return: the index where the value is located,
*         Otherwise -1 if the value is not present.
*/

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
