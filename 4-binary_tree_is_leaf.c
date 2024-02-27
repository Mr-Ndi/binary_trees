#include "binary_trees.h"

/**
  *binary_tree_is_leaf - This function checks if a given node is a leaf
  *
  *@node: Pointer to the node to check
  *Return: 1 if node is leaf and 0 otherwise
  */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	else
		return (1);
}
