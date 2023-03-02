#include "binary_trees.h"

/**
 * max - Returns the largest of two numbers
 * @left: The first number
 * @right: The second number
 *
 * Return: The max number
 */
int max(int left, int right)
{
	if (left >= right)
		return (left);
	else
		return (right);
}

/**
 * tree_height - Calculates the height of a tree
 * @tree: A pointer to the root node of the tree to calculate
 *
 * Return: The height of the tree.
 */
int tree_height(binary_tree_t *tree)
{
	int right_height = 0, left_height = 0;

	if (!tree)
		return (0);
	else if (tree->left || tree->right)
		return ((tree_height(tree->left) + (tree_height(tree->right))));

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return (max(left_height, right_height) + 1);
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

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return (left_height - right_height);
}
