#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	/* Using Post-order traversal to recursively delete nodes */
	/* *
	 * This ensures that all child nodes are 
	 * deleted before parent nodes */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Delete current node */
	free(tree);
}
