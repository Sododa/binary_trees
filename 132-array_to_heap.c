#include "binary_trees.h"
#include <stdio.h>
/**
 * array_to_heap - builds a Max Binary Heap tree from an array
 * @array: a pointer to the first element of the array to be converted
 * @size: is the number of element in the array
 * Return: a pointer to the root node of the created Binary Heap,
 * or NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	heap_t *tree = NULL;
	size_t j = 0;

	if (!array || size < 1)
		return (NULL);

	heap_insert(&tree, array[0]);

	for (j = 1; j < size; j++)
		heap_insert(&tree, array[j]);

	return (tree);

}
