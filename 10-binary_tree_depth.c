/**
 *binary_tree_depth - retrun depth of node
 *@tree: node to find its depth
 *Return: returns depth of node
 */

#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);

}
