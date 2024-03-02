#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height,right_height;

/* Check if tree is NULL */
if (tree == NULL)
{
return (0);
}

/* Recursively calculate the height of the left subtree */
if (tree->left)
{
left_height += 1 + binary_tree_height(tree->left);
}

/* Recursively calculate the height of the right subtree */
if (tree->right)
{
right_height += 1 + binary_tree_height(tree->right);
}

/* Return the max height of the left/right subtree & 1 for the current node */
return ((left_height > right_height ? left_height : right_height));
}

