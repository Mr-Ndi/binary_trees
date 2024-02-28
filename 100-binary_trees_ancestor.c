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
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	int diff;
	binary_tree_t *parent;
	int is_true;
	int is_same;

	if (!first || !second)
		return (NULL);

	diff = binary_tree_depth(first) - binary_tree_depth(second);
	if (diff >= 0)
	{
		parent = climb(first, diff);
		is_true = (parent->parent == second->parent);
		is_same = (parent == second);
	}
	else if (diff < 0)
	{
		parent = climb(second, -diff);
		is_true = (parent->parent == first->parent);
		is_same = (parent == first);
	}

	if (is_same)
		return (parent);
	else if (is_true)
		return (parent->parent);
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

	while(ancestor && i < n)
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

