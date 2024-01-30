/**
 *binary_tree_insert_left - inserts child node to the left of parent node
 *@parent: parent of newly insertd child node
 *@value: value of newly inserted node
 *Return: pointer to newly inserted node
 */

#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *tmp = NULL;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (parent->left)
	{
		tmp = parent->left;
		tmp->parent = new_node;
		new_node->left = tmp;
	}

	parent->left = new_node;
	new_node->parent = parent;

	return (new_node);

}
