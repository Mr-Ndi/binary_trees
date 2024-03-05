#include "binary_trees.h"

/**
  *binary_tree_rotate_right - This function rotate a tree to the right
  *
  *@tree: Pointer to the root node of the tree to rotate
  *Return: Pointer to the new root node of the tree once rotated
  */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *p;

	if (!tree || !tree->left)
		return (tree);

	p = tree->left;
	if (tree->parent)
	{
		if (tree->parent->left == tree)
			tree->parent->left = p;
		else
			tree->parent->right = p;
	}
	p->parent = tree->parent;
	tree->parent = p;
	tree->left = p->right;
	if (p->right)
		p->right->parent = tree;
	p->right = tree;
	return (p);
}
