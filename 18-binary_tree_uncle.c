#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if node is NULL,
 * parent is NULL, or node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
/* Check if node is NULL or the parent is NULL */
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
{
return (NULL);
}

/* Determine if the parent of the node is the */
/* left/right child of its grandparent */
if (node->parent == node->parent->parent->left)
{
/* Return right uncle if the parent is the left child */
return (node->parent->parent->right);
}
else if (node->parent == node->parent->parent->right)
{
/* Return left uncle if the parent is the right child */
return (node->parent->parent->left);
}
else
{
/* Return NULL if the parent is not a direct child of its grandparent */
return (NULL);
}
}
