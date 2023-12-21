#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - perform preorder traversal on a tree
 * @tree: the tree being traversed
 * @func: the function being used on each element
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
