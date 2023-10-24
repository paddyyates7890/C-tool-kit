#ifndef _DEFINITIONS_H
#define _DEFINITIONS_H
#include "usefull.c"
#include <stdio.h>
#include "trees.c"
#endif

// there are 3 type of tree traversal //
// preorder - visit each node before children
// postorder - visit each node after children
// inorder - visit left subtree node, right subtree node

void inordertraversal(struct node* root){
	if (root == NULL) return;
	inordertraversal(root->left);
	printf("%d -> ", root->item);
	inordertraversal(root->right);
}

void postorderTraversal(struct node* root){
	if (root == NULL) return;
	postorderTraversal(root->left);
	postorderTraversal(root->below);
	postorderTraversal(root->right);
	printf("%d -> ", root->item);
}

void preorderTraversal(struct node* root){
	if (root == NULL) return;
	printf("%d -> ", root->item);
	postorderTraversal(root->left);
	postorderTraversal(root->below);
	postorderTraversal(root->right);
}

