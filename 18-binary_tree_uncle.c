# include "binary_trees.h"

/**
 * binary_tree_uncle - A function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return:a pointer to the uncle node
 *			NULL If node is NULL or If node has no uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
		binary_tree_t *grand_p = node->parent->parent;

		if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
			return (NULL);
		if (grand_p->left == node->parent)
			return (grand_p->right);
		else
			return (grand_p->left);
}
