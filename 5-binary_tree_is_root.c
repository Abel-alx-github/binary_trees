/**
 *binary_tree_is_root - checks wheter the node is root
 *@node: node to be check
 *Return: 1 if the node is root otherwise 0
 */
#include "binary_trees.h"


int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);

	return (1);

}
