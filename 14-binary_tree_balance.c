#include "binary_trees.h"

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
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		return (left_height - right_height);
}
