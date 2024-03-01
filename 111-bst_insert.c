#include "binary_trees.h"

/**
 * bst_insert - a function that inserts a value in a Binary Search Tree
 * @tree: is a double pointer to the root node of the BST to insert the value
 * @value: is the value to store in the node to be inserted
 *
 * Return:  a pointer to the created node, or NULL on failure, If the address
 * stored in tree is NULL, the created node must become the root node, If the
 * value is already present in the tree, it must be ignored
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *c, *n;

	if (tree != NULL)
	{
		c = *tree;

		if (c == NULL)
		{
			n = binary_tree_node(c, value);
			if (n == NULL)
				return (NULL);
			return (*tree = n);
		}

		if (value < c->n)
		{
			if (c->left != NULL)
				return (bst_insert(&c->left, value));

			n = binary_tree_node(c, value);
			if (n == NULL)
				return (NULL);
			return (c->left = n);
		}
		if (value > c->n)
		{
			if (c->right != NULL)
				return (bst_insert(&c->right, value));

			n = binary_tree_node(c, value);
			if (n == NULL)
				return (NULL);
			return (c->right = n);
		}
	}
	return (NULL);
}
