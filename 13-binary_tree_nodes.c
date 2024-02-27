#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node);

/**
  *binary_tree_nodes - This function counts the nodes with at least 1
  *child in a binary tree
  *
  *@tree: Pointer to the root node of the tree to count the nodes
  *Return: nothing
  */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;
	size_t nodes = 0;

	if (!tree)
		return (0);
	left = binary_tree_nodes(tree->left);
	nodes = !binary_tree_is_leaf(tree);
	right = binary_tree_nodes(tree->right);

	return (nodes + left + right);
}

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
