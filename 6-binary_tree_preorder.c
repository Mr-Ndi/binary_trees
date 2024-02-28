#include "binary_trees.h"

/**
 * binary_tree_preorder - A function that use pre-order to traverse a tree
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node.
 *		 The value in the node must be passed
 *		 as a parameter to this function.
 * Return : nothing if tree or func is NULL
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		(*func)(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
