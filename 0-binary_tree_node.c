#include "binary_trees.h"

/**
 *binary_tree_node - creates a binary tree node
 *@parent: pointer to parent of node to create
 *@value: value to put in new node
 *
 *Return: if error occurs returns NULL else returns pointer to new node
 *
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t  *node = malloc(sizeof(binary_tree_t));


	if (node == NULL)
	{
		return (NULL);
	}
	node->left = NULL;
	node->right = NULL;
	node->n = value;
	node->parent = parent;

	return (node);
}
