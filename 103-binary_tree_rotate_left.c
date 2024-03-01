#include "binary_trees.h"

/**
 * binary_tree_rotate_left - a function that performs a left-rotation on a
 * binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *lftree, *rotation_node;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	lftree = tree->right;
	rotation_node = lftree->left;
	lftree->left = tree;
	tree->right = rotation_node;
	if (rotation_node != NULL)
		rotation_node->parent = tree;
	rotation_node = tree->parent;
	tree->parent = lftree;
	lftree->parent = rotation_node;
	if (rotation_node != NULL)
	{
		if (rotation_node->left == tree)
			rotation_node->left = lftree;
		else
			rotation_node->right = lftree;
	}

	return (lftree);
}
