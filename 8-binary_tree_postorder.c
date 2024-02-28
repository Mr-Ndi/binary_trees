#include "binary_trees.h"

/**
 * binary_tree_postorder - A function that use post-order to traverse a tree
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node.
 *		 The value in the node must be passed
 *		 as a parameter to this function.
 * Return : nothing if tree or func is NULL
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		(*func)(tree->n);
	}
}
