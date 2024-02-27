#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: pointer to the node to measure depth
 *
 * Return: Depth of the node, 0 if tree i NULL
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree != NULL && tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
