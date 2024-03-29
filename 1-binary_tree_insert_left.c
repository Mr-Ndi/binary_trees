#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts a node
 *as the left-child of another node
 *
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
		binary_tree_t *new_node;

		if (!parent)
			return (NULL);

		new_node = malloc(sizeof(binary_tree_t));
		if (!new_node)
			return (NULL);

		new_node->left = parent->left;
		if (parent->left)
			parent->left->parent = new_node;
		new_node->n = value;
		new_node->parent = parent;
		parent->left = new_node;
		new_node->right = NULL;
		return (new_node);
}
