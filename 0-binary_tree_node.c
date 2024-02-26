#include "binary_trees.h"

/*
 * binary_tree_node - A function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
		parent->n = value;
		parent->left = parent->right = NULL;
		return parent
}
