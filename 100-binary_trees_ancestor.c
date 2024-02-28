#include "binary_trees.h"

int climb(const binary_tree_t *node);
/**
  *binary_trees_ancestor - This function finds the lowest
  *common ancestor of two nodes
  *@first: Pointer to the first node
  *@second: Pointer to the second node
  *Return: lowest common ancestor if there is one or NULL
  */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	int h1 = climb(first);
	int h2 = climb(second);
	
	return (
}

/**
  *climb - This helper function determines the depth of a node
  *@node: Node with which to find the depthdd
  *Return: depth
  */
int climb(const binary_tree_t *node)
{
	binary_tree_t *ancestor = node->parent;
	int i = 0;

	while(ancestor)
	{
		ancestor = ancestor->parent;
		i++;
	}
	return (i);
}
