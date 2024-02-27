#include "binary_trees.h"

/**
* binary_tree_inorder - Goes through a binary tree using in-order traversal
* @tree: Pointer to the root node of the tree to traverse
* @func: Pointer to a function to call for each node
*
* Description: This function traverses a binary tree using in-order traversal
* and applies the function 'func' to each node.
* The value in each node is passed
* as a parameter to the function 'func'.
* If 'tree' or 'func' is NULL, the function does nothing.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree or func is NULL */
	if (tree == NULL || func == NULL)
		return;

	/* Traverse the left subtree in in-order */
	binary_tree_inorder(tree->left, func);

	/* Apply the function to the current node */
	func(tree->n);

	/* Traverse the right subtree in in-order */
	binary_tree_inorder(tree->right, func);
}
