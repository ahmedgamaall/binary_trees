#include "binary_trees.h"
/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node, If node is NULL, return NULL
 * If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *prnts, *grand;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	prnts = node->parent;
	grand = prnts->parent;
	if (grand)
	{
		if (grand->left == prnts)
			return (grand->right);
		return (grand->left);
	}
	return (NULL);
}
