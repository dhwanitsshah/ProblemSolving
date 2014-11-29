#include "BinaryTreeUsingArray.hpp"
#include <iostream>

using namespace std;

namespace ns_data_structure {

void BinaryTreeUsingArray::insert(int id) {
	Node *n = new Node(id); //not using left and right pointers

	int k = 0;
	if (tree[k] == NULL)
		tree[k] = n;
	else {

		while ((2 * k + 2) < MAXSIZE) {

			if (tree[2 * k + 1] == NULL) {
				tree[2 * k + 1] = n;
				break;
			}

			if (tree[2 * k + 2] == NULL) {
				tree[2 * k + 2] = n;
				break;
			}

			k++;
		}
	}

}

void BinaryTreeUsingArray::print() {

	for (int k = 0; k < MAXSIZE; k++) {
		if (tree[k] != NULL) {
			cout << tree[k]->id<<" ";
		}
	}
}

}
