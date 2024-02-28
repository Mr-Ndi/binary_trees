#include "binary_trees.h"

/**
 * binary_tree_depth - A function to measures the depth of a node in a tree
 * @tree: a pointer to the node to measure the depth
 *
 * Return: 0 If tree is NULL. Otherwise the depht of a node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	size_t leng;

	leng = 0;
	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		++leng;
		tree = tree->parent;
		if (tree == NULL)
		{
			break;
		}
		}
	return (leng);
}
