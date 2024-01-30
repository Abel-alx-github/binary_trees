/**
 *binary_tree_node - function that create a node of tree
 *@parent: the parent of a node to be created
 *@value: value of node
 *Return: pointer to newly created node or null on failuer
 */

#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);


	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
