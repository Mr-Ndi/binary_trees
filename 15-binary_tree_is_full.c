#include "binary_trees.h"

/**
  *binary_tree_is_full - This function checks if a binary tree is full
  *
  *@tree: Pointer to the root node of the tree to check
  *Return: 1 if tree is full, otherwise 0
  */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree->left) == binary_tree_is_full(tree->right))
		return (1);
	else
		return (0);
}

