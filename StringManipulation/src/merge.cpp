#include "merge.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

int* mergeTwoArrayRemoveDuplicates(int arr1[], int arr2[]) {

	int arr1Size = getArraySize(arr1);
	int arr2Size = getArraySize(arr2);
	int arr3Size = 0;
	int* arr3 = NULL;
	bool hasDuplicate = false;

	for (int i = 0; i < arr1Size; i++) {
		for (int j = 0; j < arr3Size; j++) {
			if (arr3[j] == arr1[i]) {
				hasDuplicate = true;
				break;
			}
		}
		if (!hasDuplicate) {
			arr3Size += 1;
			arr3 = (int*) realloc(arr3, sizeof(int) * arr3Size);
			arr3[arr3Size - 1] = arr1[i];
		}
		hasDuplicate = false;
	}


	for (int i = 0; i < arr2Size; i++) {
			for (int j = 0; j < arr3Size; j++) {
				if (arr3[j] == arr2[i]) {
					hasDuplicate = true;
					break;
				}
			}
			if (!hasDuplicate) {
				arr3Size += 1;
				arr3 = (int*) realloc(arr3, sizeof(int) * arr3Size);
				arr3[arr3Size - 1] = arr2[i];
			}
			hasDuplicate = false;
		}

	arr3[arr3Size] = getArraySize(arr3);

	return arr3;
}

void printArray(int arr[]) {

	int arrSize = getArraySize(arr);
	for (int i = 0; i < arrSize; i++) {
		cout << arr[i] << endl;
	}
}

int getArraySize(int arr[]) {
	int i = sizeof(arr);
	return i;
}
