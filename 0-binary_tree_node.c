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
	binary_tree_t  *new = malloc(sizeof(binary_tree_t));


	if (new == NULL)
	{
		return (NULL);
	}
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	new->parent = parent;

	return (new);
}
