#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth of
 * Return: Depth of the node, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t true_depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	/**
	 * Move in the upper direction of the
	 * tree to count the true_depth
	 */
	while (tree->parent != NULL)
	{
		true_depth++;
		tree = tree->parent;
	}
	return (true_depth);
}
