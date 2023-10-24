// simple tree / graph implementation
#ifndef _DEFINITIONS_H
#define _DEFINITIONS_H
#include <stdlib.h>
#include "usefull.c"
#endif

struct node {
	int item;
	struct node* left;
	struct node* right;
	struct node* below;
};

struct node* addNode(int value){
	struct node* thisNode = malloc(sizeof(struct node));
	thisNode->item = value;
	thisNode->left = NULL;
	thisNode->right = NULL;
	thisNode->below = NULL;
	return thisNode;
}

struct node* insertBelow(struct node* root, int value){
	root->below = addNode(value);
	return root->below;
}

struct node* insertRight(struct node* root, int value){
	root->right = addNode(value);
	return root->right;
}

struct node* insertLeft(struct node* root, int value) {
	root->left = addNode(value);
	return root->left;
}

