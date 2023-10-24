/*
 *This is a exactly what it says on the tin a toolkit this file is the main testing file but this directory will be 
 *a ever eveolving library of usefull algorithms and tools that i can use while developing C programs.
 */

/*
 * AUTHOR: Patrick James Yates
 */
#ifndef _DEFINITIONS_H
#define _DEFINITIONS_H
#include <stdio.h>
#include <stdlib.h>
#include "/development/debugger/dbg.h"
#include "usefull.c"
#include "bubbleSort.c"
#include "mergeSort.c" 
#include "binarySearch.c" 
#include "trees.c"
#include "treeTraversal.c"
#endif

int main(int argc, char* argv[]){
	struct node* root = addNode(5);
	struct node* left1 = insertLeft(root, 6);
	struct node* left2 = insertLeft(left1, 37);
	struct node* left3 = insertLeft(left2, 84);
	struct node* below1 = insertBelow(root, 3);
	struct node* below2 = insertBelow(below1, 13);
	struct node* below3 = insertBelow(below2, 85);
	struct node* right1 = insertRight(root, 9);



	postorderTraversal(root);
}
