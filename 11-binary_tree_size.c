#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lft_sz, rtl_sz;

	if (tree == NULL)
		return (0);

	rtl_sz = binary_tree_size(tree->left);
	lft_sz = binary_tree_size(tree->right);

	return (rtl_sz + lft_sz + 1);
}
