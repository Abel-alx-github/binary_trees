/**
 *binary_tree_size - returns the number of nodes
 *@tree: pointer to tree root
 *Return: number of nodes otherwise 0
 */
#include "binary_trees.h"


size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree ? 1 + binary_tree_size(tree->left)	+
	binary_tree_size(tree->right) : 0);
}
