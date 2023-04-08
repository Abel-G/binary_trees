#include "binary_trees.h"
/**
* binary_tree_postorder - check height of a binary tree
* @tree: pointer to the root node
* Return: 0 or height of the tree
*/
void size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
return(0);
else
int left_height = binary_tree_height(node->left);
int right_height = binary_tree_height(node->right);
return (max(left_height, right_height) + 1);
}
