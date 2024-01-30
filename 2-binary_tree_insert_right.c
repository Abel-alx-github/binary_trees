/**
 *binary_tree_insert_right - insert new child node to the right of parent
 *@parent: parent node of the newly insertd child node
 *@value: int data of the new child node
 *Return: pointer to the new node
 */

#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *tmp;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	if (parent->right)
	{
		tmp = parent->right;
		tmp->parent = new_node->right;
		new_node->right = tmp;
	}

	parent->right = new_node;
	new_node->parent = parent->right;

	return (new_node);

}
