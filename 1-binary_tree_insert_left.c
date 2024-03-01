#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
if (parent == NULL)
{
// Return NULL if parent is NULL
return (NULL);
}

// Allocate memory for the new node
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

if (new_node == NULL)
{
// Return NULL on failure to allocate memory
return (NULL);
}

// Set the value of the new node
new_node->n = value;

// Set the parent of the new node
new_node->parent = parent;

// Initialize the left and right children to NULL
new_node->left = parent->left;
new_node->right = NULL;

parent->left = new_node;
// If parent already has a left-child, the new node takes its place
if (new_node->left)
{
// Set the old left-child as the left-child of the new node
new_node->left->parent = new_node;
}

// Return a pointer to the created node
return (new_node);
}
