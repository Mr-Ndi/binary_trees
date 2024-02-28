#include "binary_trees.h"

/**
  *binary_tree_depth - This helper function determines the depth of a node
  *@tree: Node with which to find the depthdd
  *Return: depth
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *ancestor;
	int i;

	if (!tree)
		return (0);

	ancestor = tree->parent;
	i = 0;

	while (ancestor)
	{
		ancestor = ancestor->parent;
		i++;
	}
	return (i);
}

