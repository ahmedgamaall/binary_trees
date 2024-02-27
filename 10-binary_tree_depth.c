#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a node in a binary
 * tree
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: depth of the node. If tree is NULL, function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dth;

	dth = -1;

	if (tree->parent == NULL || tree == NULL)
		return (0);

	dth = binary_tree_depth(tree->parent) + 1;

	return (dth);
}
