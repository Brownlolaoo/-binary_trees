#include "binary_trees.h"

/**
* binary_tree_node - binary node to be created
* @parent: parent to the node to be created
* @value: value to the store the created node
*
* Return: pointer to the new node
*
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new;

new = malloc(sizeof(binary_tree_t));
if (!new)
return (NULL);
new-> = value;
new->parent = parent;
new->left = NULL;
new->right = NULL;
return (new);
}
