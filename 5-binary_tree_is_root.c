#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: Node to check
 *
 * Return: 1 if node is a root
 * return 0 if node is not a root or node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);

	return (0);
}
