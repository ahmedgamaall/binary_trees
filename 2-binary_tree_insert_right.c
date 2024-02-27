#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node
 * as the right-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or if parent is
 * NULL If parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_nd;

	if (parent == NULL)
		return (NULL);

	n_nd = malloc(sizeof(binary_tree_t));
	if (n_nd == NULL)
		return (NULL);

	n_nd->parent = parent;
	n_nd->n = value;
	n_nd->left = NULL;
	n_nd->right = NULL;

	if (!parent->right)
		parent->right = n_nd;
	else
	{
		n_nd->right = parent->right;
		parent->right->parent = n_nd;
		parent->right = n_nd;
	}
	return (n_nd);
}
