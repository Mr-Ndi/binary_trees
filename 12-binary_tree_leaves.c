# include "binary_trees.h"

/**
 * binary_tree_leaves - A function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0 If tree is NULL
 *			NULL if pointer is not a leaf
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
		if (tree == NULL)
				return (0);
		if (tree->left == NULL && tree->right == NULL)
				return (1);
		return binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
}
