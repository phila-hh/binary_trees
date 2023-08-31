#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL, otherwise height of the binary tree
 */

size_t tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	l = 0;
	r = 0;
	if (tree)
	{
		l = tree->left ? tree_height(tree->left) + 1 : 1;
		r = tree->right ? tree_height(tree->right) + 1 : 1;

		return ((l > r) ? l : r);
	}

	return (0);
}


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: 0 if tree is NULL, otherwise the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (tree_height(tree->left) - tree_height(tree->right));
	}

	return (0);
}
