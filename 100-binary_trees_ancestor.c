#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the lowest common ancestor of
 * two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 *
 * Return:  a pointer to the lowest common ancestor node of the two given
 * nodes, If no common ancestor was found, your function must return NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *ancestor1, *ancestor2;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	ancestor1 = first->parent;
	ancestor2 = second->parent;
	if (ancestor1 == NULL ||
	first == ancestor2 ||
	(!ancestor1->parent && ancestor2))
	{
		return (binary_trees_ancestor(first, ancestor2));
	}
	else if (ancestor2 == NULL ||
	ancestor1 == second ||
	(!ancestor2->parent && ancestor1))
	{
		return (binary_trees_ancestor(ancestor1, second));
	}
	return (binary_trees_ancestor(ancestor1, ancestor2));
}
