/**
 *binary_tree_leaves - return the number of leaf on a tree
 *@tree: pointer to root node
 *Return: number of leaf
 *
 */
#include "binary_trees.h"


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((!tree->left && !tree->right) ? 1 +
	binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right) : 0 +
	binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));


}
