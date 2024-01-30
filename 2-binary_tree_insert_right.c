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

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node || !parent)
		return (NULL);
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right)
	{
		tmp = parent->right;
		tmp->parent = new_node->right;
		new_node->right = tmp;
	}

	new_node->n = value;
	parent->right = new_node;
	new_node->parent = parent->right;

	return (new_node);

}
