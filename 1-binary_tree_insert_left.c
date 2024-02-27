#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts
 * a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 * If parent already has a left-child, the new node must take its place, and the 
 * old left-child must be set as the left-child of the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_nd = malloc(sizeof(binary_tree_t));

	if (parent == NULL){
		return (NULL);
		free (n_nd);
	}

	if (n_nd == NULL)
		return (NULL);

	n_nd->parent = parent;
	n_nd->n = value;
	n_nd->left = NULL;
	n_nd->right = NULL;

	if (!parent->left)
		parent->left = n_nd;
	else
	{
		n_nd->left = parent->left;
		parent->left->parent = n_nd;
		parent->left = n_nd;
	}
	return (n_nd);
}
