/**
 *binary_tree_inorder - prints inorder(left, root, right)
 *@tree: root node
 *@func: pointer to function that print value of n
 */
#include "binary_trees.h"



void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);
	binary_tree_inorder(tree->right, func);



}
