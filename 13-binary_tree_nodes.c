/**
 *binary_tree_nodes - returns the number of nodes atlest with one child
 *@tree: pointer to root of tree
 *Return: number of node or 0
 *
 */
#include "binary_trees.h"


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((tree->left || tree->right) ? 1 +
	binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) : 0);

}
