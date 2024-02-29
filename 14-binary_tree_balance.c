#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor of a
 * binary tree
 * @tree: is a pointer to the root node of the tree to measure the balance
 * factor
 *
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lft_blnc, rtl_blnc;

	if (tree == NULL)
		return (0);

	lft_blnc = binary_tree_height(tree->left);
	rtl_blnc = binary_tree_height(tree->right);

	return (lft_blnc - rtl_blnc);
}

#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: height of the tree. If tree is NULL, function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lft_h, rlt_h;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	lft_h = binary_tree_height(tree->left);
	rlt_h = binary_tree_height(tree->right);

	return ((lft_h > rlt_h ? lft_h : rlt_h) + 1);
}
