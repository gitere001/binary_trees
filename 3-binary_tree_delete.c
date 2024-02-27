#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an enire binary tree
 * @tree: pinter of the tree to be delete
 * Description: deletes an entire tree starting from root.
 * if the tree is NULL, does nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
