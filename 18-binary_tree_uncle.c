# include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/**
 * binary_tree_uncle - A function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return:a pointer to the uncle node
 *			NULL If node is NULL or If node has no uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
		if (node == NULL || node->parent == NULL)
			return (NULL);
		else
			return (binary_tree_sibling(node->parent));
}

/**
  *binary_tree_sibling - This function finds the sibling of a node
  *@node: Pointer to the node to find the sibling
  *Return: sibling of @node
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
