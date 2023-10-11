#include "search_algos.h"

int recurse_helper(int *arr, size_t size, int val, size_t idx);

/**
 * linear_search - Search for a value in an integer array
 * @array: Pointer to an array of integers
 * @size: Size of the array
 * @value: Value to locate
 * Return: The index of the value if found, 
 * or -1 if the value is not found.
 */

int linear_search(int *array, size_t size, int value)
{

	if (array == NULL)
		return (-1);

	return (recurse_helper(array, size, value, 0));
}
/**
 * recurse_helper - recursive implement of linear search
 * @arr: pointer to array of ints
 * @size: size of array
 * @val: value to locate
 * @idx: current index
 *
 * Return: index of value; -1 if value not found
 */
int recurse_helper(int *arr, size_t size, int val, size_t idx)
{
	if (idx == size)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", idx, arr[idx]);

	if (arr[idx] == val)
		return (idx);

	return (recurse_helper(arr, size, val, idx + 1));
}
