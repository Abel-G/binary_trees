#include "binary_trees.h"
/**
* binary_tree_depth - measures the deapth of a node in binary tree
* @tree: points to the nodeto measure the depth
* Return: 0 if tree is Null
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
else
{
size_t parent_depth = binary_tree_depth(tree->parent);
return (parent_depth + 1);
}
}
