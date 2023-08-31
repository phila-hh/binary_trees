#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node of the two given nodes
 *	   otherwise NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *x, *y;

	if (!first || !second)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	x = first->parent;
	y = second->parent;
	if (!x || first == y || (!x->parent && y))
	{
		return (binary_trees_ancestor(first, y));
	}
	else if (!y || second == x || (!y->parent && x))
	{
		return (binary_trees_ancestor(x, second));
	}

	return (binary_trees_ancestor(x, y));
}
