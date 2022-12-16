#include "binary_trees.h"

/**
 *binary_tree_is_leaf - checks if node is a leaf of a tree
 *@node: pointer to node to check
 *
 * Return: if node is a leaf -1 else if not 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (new == NULL || new->left != NULL || new->right != NULL)
	{
		return (0);
	}
	return (1);
}
