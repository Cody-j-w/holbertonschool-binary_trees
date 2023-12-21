#include <stdlib.h>
#include "binary_trees.h"

/**
 * 
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode = malloc(sizeof(binary_tree_t *));

    if (newnode == NULL)
        return (0);

    newnode->n = value;
    newnode->parent = parent;
    newnode->left = NULL;
    newnode->right = NULL;
    return (newnode);
}