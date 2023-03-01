#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node as the
 * right child of another node
 * @parent: A pointer to the node to insert the right child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the newly created node
 * Or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->parent = parent;
	newNode->right = parent->right;

	if (newNode->right)
		parent->right->parent = newNode;

	parent->right = newNode;

	return (newNode);
}
