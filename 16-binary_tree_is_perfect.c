#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: 0 if the tree is NULL, otherwise the size of the binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	size = 0;
	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}

	return (size);
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL, otherwise height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	l = 0;
	r = 0;
	if (tree)
	{
		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((l > r) ? l : r);
	}

	return (0);
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL or not perfect, otherwise 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, r;

	height = binary_tree_height(tree) + 1;
	size = binary_tree_size(tree);
	r = 1;

	if (tree)
	{
		while (height-- > 0)
		{
			r = r * 2;
		}
		r -= 1;

		if (size == r)
		{
			return (1);
		}
	}

	return (0);
}
