#include "binary_trees.h"

/**
 *binary_tree_insert_left - insert a node to the left of a parent
 *@parent: pointer to node to insert left child in
 *@value: value to store in new node
 *
 * Return: if parent is NULL or error occurs - NULL
 * 			else pointer to the new node
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}

	node = binary_tree_node(parent, value);
	if (node == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;

	return (node);
}
