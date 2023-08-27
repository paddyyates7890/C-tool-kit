// Simple bubble sort algorithms for ints and strings
// AUTHOR: Patrick James Yates

#include <stdio.h>
#include <stdbool.h>
#ifndef _DEFINITIONS_H
#define _DEFINITIONS_H
#include "usefull.c"
#endif

void intSwap(int* v1, int* v2){
	int temp = *v1;
	*v1 = *v2;
	*v2 = temp;
}

void stringSwap(char* v1, char* v2){
	char temp = *v1;
	*v1 = *v2;
	*v2 = temp;
}

void bubbleSortInteger(int arr[], int n)
{
    int i, j;
    bool sorted;
    for (i = 0; i < n - 1; i++) {
        sorted = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                intSwap(&arr[j], &arr[j + 1]);
                sorted = true;
            }
        }
  
        if (sorted == false)
            break;
    }
}

void bubbleSortString(char arr[], int n){
	int i,j, v1, v2;
	bool sorted;
	for (i = 0; i < n -1; i++){
		sorted = false;
		for (j = 0; j < n - i; j++){
			v1 = getCharIntVal(arr[j]);
			v2 = getCharIntVal(arr[j+1]);
			if (v1 > v2){
				stringSwap(&arr[j], &arr[j+1]);
				sorted = true;
			}
		}

		if(sorted == false)
			break;
	}		
}
