#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node as the
 * left child of another node
 * @parent: A pointer to the node to insert the left child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the newly created node
 * Or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->right = NULL;
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = parent->left;

	if (newNode->left != NULL)
		parent->left->parent = newNode;

	parent->left = newNode;

	return (newNode);
}
