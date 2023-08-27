// a group of usefull functions and procedures 
// AUTHOR: Patrick James Yates

#include <stdio.h>
#include "/development/debugger/dbg.h"

int getCharIntVal(char character){
	int val = (int)character;

	return val;	
}

void printArrC(char arr[], int n){
	int i;
	for(i=0;i < n;i++){
		printf("%c ", arr[i]);
	}
	printf("\n");
}

void printArrI(int arr[], int n){
	int i;
	for(i=0;i < n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");	
}

int getArrSizeInt(int arr[], int printRes){
	int sizeArr = sizeof(*arr);
	int siveArrElement = sizeof(arr[0]);
	int size = sizeArr / siveArrElement;
	
	if (printRes) {
		printf("%d\n", size);
	}
	return size;
}
