#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if the tree is NULL, otherwise 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (is_full(tree));
}


/**
 * is_full - recursively checks if a binary tree is full
 * @tree: pointer to the root node of a tree to be checked
 *
 * Return: 1 if full, 0 otherwise
 */

int is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
				(tree->left == NULL && tree->right != NULL) ||
				is_full(tree->left) == 0 ||
				is_full(tree->right) == 0)
		{
			return (0);
		}
	}

	return (1);
}
