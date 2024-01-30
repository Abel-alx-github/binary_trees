#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *tmp = NULL;
	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node || !parent)
		return NULL;

	if (parent->left)
	{
		tmp = parent->left;
		tmp->parent = new_node;
		new_node->left = tmp;
	}

	new_node->n = value;
	parent->left = new_node;
	new_node->parent = parent;

	return new_node;

}
