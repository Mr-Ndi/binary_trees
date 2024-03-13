#include "binary_trees.h"

int lr_most(binary_tree_t *tree, int rl);
/**
  *binary_tree_is_bst - This function goes through a binary tree using
  *in-order traversal to find if the binary tree is a Binary Search Tree
  *
  *@tree: Pointer to the root node of the tree to traverse
  *Return: nothing
  */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	int left = 1;
	int right = 1;
	int c_left = 1;
	int c_right = 1;

	if (!tree)
		return (0);

	if (tree->left)
	{
		left = binary_tree_is_bst(tree->left);
		c_left = lr_most(tree->left, 0) < tree->n;
	}
	if (tree->right)
	{
		right = binary_tree_is_bst(tree->right);
		c_right = lr_most(tree->right, 1) > tree->n;
	}
	return (left && c_left && c_right && right);
}

/**
  *lr_most - last left or right most element down a tree
  *@tree: Pointer to the root node of the tree to check
  *@rl: Integer representing 0 for left most and 1 for right most element
  *Return: Value of the node at the last element
  */

int lr_most(binary_tree_t *tree, int rl)
{
	binary_tree_t *h = tree;

	if (rl == 0)
		while (h->right)
			h = h->right;
	else
		while (h->left)
			h = h->left;
	return (h->n);
}
