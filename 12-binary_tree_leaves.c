#include "binary_trees.h"

/**
* binary_tree_leaves - Counts the leaves in a binary tree
* @tree: Pointer to the root node of the tree to count the leaves
*
* Return: Number of leaf nodes in the binary tree, 0 if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_count = 0;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* If the current node is a leaf node, increment the leaves count */
	if (tree->left == NULL && tree->right == NULL)
		leaves_count++;

	/* Recursively count the leaves in the left and right subtrees */
	leaves_count += binary_tree_leaves(tree->left);
	leaves_count += binary_tree_leaves(tree->right);

	return (leaves_count);
}





