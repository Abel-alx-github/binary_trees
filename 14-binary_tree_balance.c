/**
 *binary_tree_balance - return the difernce of left and right node
 *@tree: pointer to node
 *Return: factors of left vs right node
 *
 */
#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	left = 0;
	right = 0;
	if (tree->left)
		left += 1;
	if (tree->right)
		right += 1;

	left += binary_tree_height(tree->left);
	right += binary_tree_height(tree->right);

	return (left - right);


}
