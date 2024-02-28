#include "binary_trees.h"

/**
  *binary_tree_sibling - This function finds the sibling of a node
  *@node: Pointer to the node to find the sibling
  *Return: sibling of @node
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
