#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 *
 * Return: A pointer to the sibling node
 * Or NULL if node has no sibling, node is NULL or
 * node parent is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *node_parent = node->parent;

	if (!node || !node_parent)
		return (NULL);

	if (node_parent->left->n == node->n)
		return (node_parent->right);

	return (node_parent->left);
}
