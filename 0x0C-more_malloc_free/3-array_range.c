#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum of the range of number
 * @max: maximum of the range of numbers
 * Return: a pointer to an array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	arr = malloc(size * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size && min <= max; i++, min++)
		*(arr + i) = min;
	return (arr);
}
