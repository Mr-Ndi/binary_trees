#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to inserts at right side of a node
 * @parent: a pointer to the node to insert the right-child in
 * @value:the value to store in the new node
 *
 * Return: a pointer to the node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *Rnode;

	Rnode = malloc(sizeof(binary_tree_t));
	if (Rnode == NULL || parent == NULL)
	{
		return (NULL);
	}
	Rnode->n = value;
	if (parent->right == NULL)
		Rnode->left = Rnode->right = NULL;
	else
	{
		Rnode->right = parent->right;
		parent->right = Rnode;
	}
	Rnode->parent = parent;

	return (Rnode);
}
