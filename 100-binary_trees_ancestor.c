#include "binary_trees.h"

binary_tree_t *climb(const binary_tree_t *node, int n);
size_t binary_tree_depth(const binary_tree_t *tree);
/**
  *binary_trees_ancestor - This function finds the lowest
  *common ancestor of two nodes
  *@first: Pointer to the first node
  *@second: Pointer to the second node
  *Return: lowest common ancestor if there is one or NULL
  */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int diff;
	binary_tree_t *lowest, *highest;

	if (!first || !second)
		return (NULL);

	diff = binary_tree_depth(first) - binary_tree_depth(second);
	if (diff >= 0)
	{
		lowest = climb(first, diff);
		highest = (binary_tree_t *)second;
	}
	else if (diff < 0)
	{
		lowest = climb(second, -diff);
		highest = (binary_tree_t *)first;
	}

	while (highest && lowest && lowest != highest)
	{
		lowest = lowest->parent;
		highest = highest->parent;
	}

	if (lowest == highest)
		return (lowest); /*or return (highest); <whatever>*/
	else
		return (NULL);
}

/**
  *climb - This helper function climbs up in the tree
  *@node: Node with which to find the depth
  *@n: Nth ancestor to reach
  *Return: Nth ancestor
  */
binary_tree_t *climb(const binary_tree_t *node, int n)
{
	binary_tree_t *ancestor = (binary_tree_t *)node;
	int i = 0;

	while (ancestor && i < n)
	{
		ancestor = ancestor->parent;
		i++;
	}
	return (ancestor);
}

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

