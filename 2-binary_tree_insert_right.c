#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
new_node->left = NULL;
new_node->right = NULL;


// If parent already has a right-child, the new node takes its place
if (parent->right != NULL)
{
// Set the old right-child as the right-child of the new node
new_node->right = parent->right;
// Set the parent of the old right-child to the new node
parent->right->parent = new_node;
}

// Set the new node as the right-child of the parent
parent->right = new_node;

// Return a pointer to the created node
return (new_node);
}
