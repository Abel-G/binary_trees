#include "binary_trees.h"
/**
* binary_tree_height - check height of a binary tree
* @tree: pointer to the root node
* Return: 0 or height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
int size_t, left_height, right_height
if (tree == NULL)
return (0);
else
left_height = binary_tree_height(node->left);
right_height = binary_tree_height(node->right);
return (max(left_height, right_height) + 1);
}
