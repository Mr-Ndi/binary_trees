#include "binary_trees.h"

/**
 * binary_tree_node - A function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->left = new->right = NULL;
	return (new);
}
