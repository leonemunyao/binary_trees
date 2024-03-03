#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if node is NULL,
 *  parent is NULL, or node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
/* Check if node is NULL or the parent is NULL */
if (node == NULL || node->parent == NULL)
{
return (NULL);
}

/* Determine if the given node is the left or right child */
if (node->parent->left == node)
{
/* Return right sibling if the node is the left child */
return (node->parent->right);
}
else if (node->parent->right == node)
{
/* Return left sibling if the node is the right child */
return (node->parent->left);
}
else
{
/* Return NULL if the node is not a direct child of its parent */
return (NULL);
}
}
