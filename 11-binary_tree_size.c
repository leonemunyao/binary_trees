#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: Size of the tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
/* Check if tree is NULL */
if (tree == NULL)
{
return (0);
}

/* Recursively calculate the size of the left&right subtrees&1 node */
return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
