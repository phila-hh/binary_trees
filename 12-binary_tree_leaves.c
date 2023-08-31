#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0 if tree is NULL, otherwise the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;

	count = 0;
	if (tree)
	{
		count += (!tree->left && !tree->right) ? 1 : 0;
		count += binary_tree_leaves(tree->left);
		count += binary_tree_leaves(tree->right);
	}

	return (count);
}
