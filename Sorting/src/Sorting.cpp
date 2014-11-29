#include <iostream>
using namespace std;

void print(int[]);

void print(int[], int);
void bubbleSort(int[], int);
void selectionSort(int[], int);
void  insertionSort(int[], int);

int main() {

	int a[] = { 12, 11, 3, 2, 8, 2, 1 };
	int len = sizeof(a) / sizeof(int);

	cout << "Before Sorting: ";
	print(a, len);
	cout << endl;

	bubbleSort(a, len);
	//selectionSort(a, len);
	//insertionSort(a, len);

	cout << "After sorting : ";
	print(a, len);

	return 0;
}

void print(int a[], int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<a[i]<<" ";
	}
}

void selectionSort(int a[], int len) {
	int min, temp;
	for (int i = 0; i < len; i++) {
		//find minimum
		min = i;
		for (int j = i + 1; j < len; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		//swap elements
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}

void bubbleSort(int a[], int len) {
	bool hasSwap = true;
	int temp;
	for (int pass = 0; pass < len && hasSwap; pass++) {
		hasSwap = false;
		for (int i = 0; i < len - 1; i++) {
			if (a[i] > a[i + 1]) //swap
					{
				hasSwap = true;
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
}

void insertionSort(int a[], int len) {
	int i, j, v;
	for (i = 1; i < len; i++) {
		v = a[i];
		j = i;
		while (a[j - 1] > v && j >= 1) {
			a[j] = a[j - 1];
			j--;
		}
		a[j] = v;
	}
}
