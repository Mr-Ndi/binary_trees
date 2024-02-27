#include "binary_trees.h"

/**
  *binary_tree_height - This function measures the height of a binary tree
  *
  *@tree: Pointer to the root node of the tree to measure the height
  *Return: nothing
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	if (tree->left)
		left = binary_tree_height(tree->left);
	if (tree->right)
		right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
