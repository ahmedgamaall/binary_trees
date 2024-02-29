#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with at least 1 child
 * in a binary tree
 * @tree: is a pointer to the root node of the tree to count the number of
 * nodes
 *
 * Return: If tree is NULL, the function must return 0, A NULL pointer is
 * not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lft_c, rtl_c;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	rtl_c = binary_tree_nodes(tree->left);
	lft_c = binary_tree_nodes(tree->right);

	return (rtl_c + lft_c + 1);
}
