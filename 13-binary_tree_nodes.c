#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes with at least 1 child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
/* Check if tree is NULL */
if (tree == NULL)
{
return (0);
}

/* If at least one child is present, count the current node */
if (tree->left != NULL || tree->right != NULL)
{
return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}

return (0);
}
