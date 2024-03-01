#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"

/**
 * lvs_checker - a function that checks if the leaves is perfect
 * @tree: is a pointer to the root node of the tree to check
 * @current_tree_leaf: current leaf
 * @binarytree_level: level of past leaves
 *
 * Return: If tree is NULL, your function must return 0
 */
int lvs_checker(const binary_tree_t *tree, int current_tree_leaf,
int *binarytree_level)
{

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
	{
		if (*binarytree_level == 0)
		{
			*binarytree_level = current_tree_leaf;
			return (1);
		}
		return (*binarytree_level == current_tree_leaf);
	}
	return (lvs_checker(tree->left, current_tree_leaf + 1, binarytree_level) &&
		lvs_checker(tree->right, current_tree_leaf + 1, binarytree_level));
}

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int binarytree_level = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) && (!binary_tree_balance(tree)))
	{
		return (lvs_checker(tree, 0, &binarytree_level));
	}

	return (0);
}
