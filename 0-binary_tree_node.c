#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
/* Allocate memory for the new node */
binary_tree_t *new_node;

new_node = malloc(sizeof(binary_tree_t));

if (new_node == NULL)
{
/* Return NULL on failure to allocate memory */
return (NULL);
}

/* Set the value of the new node */
new_node->n = value;

/* Set the parent of the new node */
new_node->parent = parent;

/* Initialize the left and right children to NULL */
new_node->left = NULL;
new_node->right = NULL;

/* Return a pointer to the new node */
return (new_node);
}
