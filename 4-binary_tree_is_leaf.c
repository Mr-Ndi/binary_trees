#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A function that checks if a node is a leaf
 * @node: a pointer to the node that we need to check
 *
 * Return: 1 if node is a leaf, 0 if not or if node is null
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
		{
			return (1);
		}
		return (0);
	}
	return (0);
}
