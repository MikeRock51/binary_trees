#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	int perfect;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 50);
	root->right = binary_tree_node(root, 100);

	perfect = binary_tree_is_perfect(root);
	printf("Is the tree with root node (%d) perfect? %d\n", root->n, perfect);

	binary_tree_print(root);
	binary_tree_delete(root);
	return (0);
}
