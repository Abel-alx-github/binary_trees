/**
 *binary_tree_is_full - return 1 if the tree is full binary
 *@tree: pointer to the node
 *Return: 1 if it is full binary tree otherwise 0
 */

#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree)
{


	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	return ((tree->left && tree->right) ? (binary_tree_is_full(tree->left)
	&& binary_tree_is_full(tree->right)) : 0);
}
