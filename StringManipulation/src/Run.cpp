//============================================================================
// Name        : Array.cpp
// Author      : Dhwanit Shah
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include "string.h"
#include "merge.hpp"

using namespace std;

int main() {

	int arr1[] = { 3, 2, -1, 3, -4, -1, 6, 6 };
	int arr2[] = { 4, 5, 6, 2, -1, 6, 2 };

	int *arr3 = mergeTwoArrayRemoveDuplicates(arr1, arr2);
	printArray(arr3);
}
