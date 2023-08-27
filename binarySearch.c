// a simple binary search algorithm //
#ifndef _DEFINITIONS_H
#define _DEFINITIONS_H
#include "usefull.c"
#include "mergeSort.c"
#endif

int binarySearch(int arr[], int n, int value){
	int mid = n / 2;
	int low = 0;
	int high = n-1;
	int found = 0;

	while(!found) {
		if(arr[mid] == value){
			found = 1;
			break;
		}
		else if(arr[mid] > value){
			high = mid;
			mid = high / 2;
		}
		else if (arr[mid] < value){
			low = mid;
			mid = (high + low) / 2;
		}
	}

	return mid;
}
