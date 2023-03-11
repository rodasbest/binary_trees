#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that check a node if is a root
 * @node: Point to a node
 * Return: 1 if node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{return (0); }

	if (node->parent != NULL)
	{return (0); }

	return (1);
}
