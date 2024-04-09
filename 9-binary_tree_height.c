#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of
 * a binary tree
 * @tree: Pointer to the root node of the
 * tree to measure the height of
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
	{
		return (0);
	}
	/* verify the height of the left subtrees */
	l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	/* verify the height of the right subtrees */
	r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	/**
	 * Return the height That is, maximum of left
	 * and right subtrees plus 1 (for the root)
	 */
	return (l_height > r_height ? l_height : r_height);
}
