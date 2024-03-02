#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t left_height = 0, right_height = 0;

/* Recursively calculate the height of the left subtree */
left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;

/* Recursively calculate the height of the right subtree */
right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

/* Return the max height of the left/right subtree & 1 for the current node */
return ((left_height > right_height ? left_height : right_height) +1);
}
return (0);
}


/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_height;

/* Check if tree is NULL */
if (tree == NULL)
{
return (0);
}

/* Calculate the height of the left and right subtrees */
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

/* Return the balance factor (difference in heights) */
return (left_height - right_height);
}
