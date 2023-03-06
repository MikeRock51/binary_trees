#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure
 *
 * Return: The number of nodes in the tree
 * Or 0 in tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;

	if (!tree)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return ((left_size + right_size) + 1);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure
 *
 * Return: The height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree)
	{
		l = (tree->left) ? 1 + binary_tree_height(tree->left) : 1;

		r = (tree->right) ? 1 + binary_tree_height(tree->right) : 1;
		return (l > r ? l : r);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a Binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect
 * Or 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	if ((!tree->left && !tree->right) ||
		((int)binary_tree_size(tree) == (1 << left_height) - 1))
		return (1);

	return (1);
}
