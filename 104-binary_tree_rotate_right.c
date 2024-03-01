#include "binary_trees.h"

/**
 * binary_tree_rotate_right - a function that performs a right-rotation on a
 * binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *rhtree;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}
	rhtree = tree->left;
	tree->left = rhtree->right;
	if (rhtree->right != NULL)
	{
		rhtree->right->parent = tree;
	}
	rhtree->right = tree;
	rhtree->parent = tree->parent;
	tree->parent = rhtree;
	return (rhtree);
}
