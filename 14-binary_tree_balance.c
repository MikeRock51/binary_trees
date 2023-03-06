#include "binary_trees.h"

/**
 * max - Returns the largest of two numbers
 * @left: The first number
 * @right: The second number
 *
 * Return: The max number
 */
size_t max(size_t left, size_t right)
{
	if (left >= right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure
 *
 * Return: The height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	if (tree->left)
		left_height += 1;
	right_height = binary_tree_height(tree->right);
	if (tree->right)
		right_height += 1;

	return ((int)max(left_height, right_height));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure
 *
 * Return: The balance factor of the tree
 * Or 0, if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (-1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
