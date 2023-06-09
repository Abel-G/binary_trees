#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node
* Return: 0 if tree is Null
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
else
{
size_t left_height = binary_tree_height(tree->left);
size_t right_height = binary_tree_height(tree->right);
if (left_height > right_height)
{
return (left_height + 1);
}
else
{
return (right_height + 1);
}
}
}
