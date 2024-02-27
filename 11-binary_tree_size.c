#include "binary_trees.h"

/**
  *binary_tree_size - This function measures the size of a binary tree
  *
  *@tree: Pointer to the root node of the tree to measure the height
  *Return: nothing
  */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (right + left + 1);
}
