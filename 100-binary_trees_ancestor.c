#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node,
 * or NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
const binary_tree_t *ancestor;

/* Check if either of the nodes is NULL */
if (first == NULL || second == NULL)
{
return (NULL);
}

/* Find the lowest common ancestor by traversing the */
/*tree upwards from both nodes */
ancestor = first;
while (ancestor != NULL)
{
if (binary_tree_is_descendant(ancestor, second))
{
return ((binary_tree_t *)ancestor);
}
ancestor = ancestor->parent;
}

/* Return NULL if no common ancestor was found */
return (NULL);
}
