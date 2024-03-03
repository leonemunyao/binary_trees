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
return ((left_height > right_height ? left_height : right_height));
}
return (0);
}


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t left_height, right_height;

/* If the tree is empty, it is not perfect by definition */
if (tree == NULL)
{
return (0);
}

/* Calculate the height of the left and right subtrees */
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

/* Check if the left and right subtrees have the same height */
if (left_height != right_height)
{
return (0);
}

/* Recursively check if both left and right subtrees are perfect */
return (
binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right)
);
}
