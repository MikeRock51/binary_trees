#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a Binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 0 if tree is perfect
 * Or 1 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((!tree->left && !tree->right) || (!tree->right && tree->left))
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));

	return (0);
}
