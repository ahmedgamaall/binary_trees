#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree:is a pointer to the root node of the tree to count the number of
 * leaves
 *
 * Return: If tree is NULL, the function must return 0, A NULL pointer is
 * not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lft_c, rtl_c;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	rtl_c = binary_tree_leaves(tree->left);
	lft_c = binary_tree_leaves(tree->right);

	return (rtl_c + lft_c);
}
