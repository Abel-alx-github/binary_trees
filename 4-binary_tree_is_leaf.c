#include "binary_trees.h"
/**
 *binary_tree_is_leaf - check whether the node is leaf or not
 *@node: node to be checked
 *Return: 1 if the node is leaf otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->left) && !(node->right))
		return (1);

	return (0);
}
