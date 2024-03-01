#include "binary_trees.h"

void free_node_t(node_t **head);
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
  *binary_tree_is_complete - This function checks if a binary tree is complete
  *
  *@tree: Pointer to the root of the tree
  *Return: nothing
  */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	node_t *head = NULL;
	binary_tree_t *p;

	if (!tree)
		return (0);

	head = add_node_t(&head, (binary_tree_t *)tree);
	p = (binary_tree_t *)tree;

	while (head)
	{
		if (!p && head->p)
		{
			free_node_t(&head);
			return (0);
		}
		p = head->p;
		if (p)
		{
			add_node_t(&head, head->p->left);
			add_node_t(&head, head->p->right);
		}
		head = pop_node_t(&head);
	}

	return (1);
}

/**
  *free_node_t - freeing a list
  *@head: pointer to the start of the list
  *Return: nothing
  */
void free_node_t(node_t **head)
{
	node_t *ptr;
	node_t *tmp;

	if (!head)
		return;
	ptr = *head;

	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
	*head = NULL;
}
