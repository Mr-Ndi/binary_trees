#include "binary_trees.h"

/**
 *binary_tree_height - This function measures the height of a binary tree
 *
 *@tree: Pointer to the root node of the tree to measure the height
 *Return: nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
		size_t left = 0;
		size_t right = 0;

		if (!tree || (!tree->left && !tree->right))
			return (0);
		if (tree->left)
			left = binary_tree_height(tree->left);
		if (tree->right)
			right = binary_tree_height(tree->right);
		if (left > right)
			return (left + 1);
		else
			return (right + 1);
}

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree node
 * @tree: A pointer to the node to calculate the balance factor
 *
 * Return: Balance factor of the node, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
		int left_height, right_height;

		if (tree == NULL)
			return (0);
		left_height = tree->left ? (int)binary_tree_height(tree->left) : -1;
		right_height = tree->right ? (int)binary_tree_height(tree->right) : -1;

		return (left_height - right_height);
}
