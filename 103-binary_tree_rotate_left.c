#include "binary_trees.h"

/**
  *binary_tree_rotate_left - This function rotate a tree to the left
  *
  *@tree: Pointer to the root node of the tree to rotate
  *Return: Pointer to the new root node of the tree once rotated
  */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *p;

	if (!tree || !tree->right)
		return (tree);
	
	p = tree->right;
	if (tree->parent)
	{
		if (tree->parent->left == tree)
			tree->parent->left = p;
		else
			tree->parent->right = p;
	}
	p->parent = tree->parent;
	tree->parent = p;
	tree->right = p->left;
	if (p->left)
		p->left->parent = tree;
	p->left = tree;
	return (p);
}
