#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with at least
 * one child, in a binary tree
 * @tree: A pointer to the root node of the tree to count
 *
 * Return: The number of non_leaf nodes
 * Or 0 if tree in NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_node = 0, right_node = 0;

	if (!tree)
		return (0);
	else if (tree->left || tree->right)
		return (1 + (binary_tree_nodes(tree->left) +
		(binary_tree_nodes(tree->right))));

	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);

	return (left_node + right_node);
}
