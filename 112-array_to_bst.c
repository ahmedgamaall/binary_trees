#include "binary_trees.h"
/**
 * array_to_bst - a function that builds a Binary Search Tree from an array
 * @array: is a pointer to the first element of the array to be converted
 * @size:  is the number of element in the array
 * Return: a pointer to the root node of the created BST, or NULL on failure
 * If a value of the array is already present in the tree, this value must be
 * ignored
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t counter = 0;
	bst_t *search_tree;

	search_tree = NULL;
	if (size == 0)
	{
		return (NULL);
	}
	for (; counter < size; counter++)
	{
		if (counter == 0)
		{
			bst_insert(&search_tree, array[counter]);
		}
		else
		{
			bst_insert(&search_tree, array[counter]);
		}
	}
	return (search_tree);
}
