#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: A pointer to the node to insert the right child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the new node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *Rnode;

    if (parent == NULL)
        return (NULL);

    Rnode = malloc(sizeof(binary_tree_t));
    if (Rnode == NULL)
    {
        return (NULL);
    }

    Rnode->n = value;
    Rnode->left = NULL;
    Rnode->right = NULL;

    if (parent->right != NULL)
    {
        Rnode->right = parent->right;
        Rnode->right->parent = Rnode;
    }

    parent->right = Rnode;
    Rnode->parent = parent;

    return (Rnode);
}
