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

	if (!tree)
		return (0);
	left = 0;
	right = 0;
	if (tree->left)
		left += 1;
	if (tree->right)
		right += 1;

	left += height(tree->left);
	right += height(tree->right);

	return (left - right);


}

/**
 *height - returns the height of node
 *@tree: pointer to node
 *Return: number as height
 */
int height(binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = 0;
	right = 0;
	left = ((tree->left) ? 1 + height(tree->left) : 0);
	right = ((tree->right) ? 1 + height(tree->right) : 0);

	if (left > right)
		return (left);
	return (right);
}
