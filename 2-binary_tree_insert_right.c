#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node
 *as the right child of another node (parent)
 *
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
		binary_tree_t *new_node;

		if (!parent)
			return (NULL);

		new_node = malloc(sizeof(binary_tree_t));
		if (!new_node)
			return (NULL);

		new_node->right = parent->right;
		if (parent->right)
			parent->right->parent = new_node;
		new_node->n = value;
		new_node->parent = parent;
		parent->right = new_node;
		new_node->left = NULL;
		return (new_node);
}
