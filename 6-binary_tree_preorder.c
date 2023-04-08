#include "binary_trees.h"
/**
* binary-tree-pre-order - traverse a binary tree throu pre order format
* @tree: pointer to the root node
* @fun: pointer to a function to call
* Return: noting if tree or fun is null
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
