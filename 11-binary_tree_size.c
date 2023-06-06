#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer tot he root node of the tree to measure the size
 * Return: 0 if tree is NULL
**/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	}
	return (0);
}
