/**
 *binary_tree_postorder - print in postorder(left, right, root)
 *@tree: pointer to root node
 *@func: pointer to function
 */
#include "binary_trees.h"


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);



}
