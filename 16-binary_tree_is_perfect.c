#include "binary_trees.h"

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: Pointer to the root node of the tree to check
*
* Return: 1 if the tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t size = binary_tree_size(tree);
	size_t max_nodes = (1 << height) - 1;

	/* Check if the tree is NULL */
	if (tree == NULL)
		return (0);

	/* Check if the tree has the maximum number of nodes */
	return (size == max_nodes);
}
