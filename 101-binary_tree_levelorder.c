#include "binary_trees.h"

/**
  *pop_node_t - freeing a list
  *@head: pointer to the start of the list
  *Return: Pointer to the new head
  */
node_t *pop_node_t(node_t **head)
{
	node_t *tmp;

	if (!head || !*head)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (*head);
}

/**
  *add_node_t - adding a node at the end
  *@head: pointer to the start of the list
  *@p: Pointer with which to form a new node
  *Return: Pointer to the head
  */
node_t *add_node_t(node_t **head, binary_tree_t *p)
{
	node_t *ptr, *tmp;

	if (!p)
		return (*head);
	ptr = (node_t *) malloc(sizeof(node_t));
	if (ptr == NULL)
		return (NULL);
	ptr->p = p;
	ptr->next = NULL;
	if (*head == NULL)
		*(head) = ptr;
	else
	{
		tmp = *(head);
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = ptr;
	}
	return (*head);
}

/**
  *binary_tree_levelorder - This function Goes through a binary tree using
  *Breadth First Search
  *
  *@tree: Pointer to the root of the tree to traverse
  *@func: Pointer to a function to call for each node.
  *Return: nothing
  */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	node_t *head = NULL;

	if (!tree || !func)
		return;

	head = add_node_t(&head, (binary_tree_t *)tree);

	while (head)
	{
		func(head->p->n);
		add_node_t(&head, head->p->left);
		add_node_t(&head, head->p->right);
		head = pop_node_t(&head);
	}
}
