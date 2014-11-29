#ifndef BINARYTREEUSINGARRAY
#define BINARYTREEUSINGARRAY
#define MAXSIZE 10
#include "Node.hpp"

namespace ns_data_structure {

class BinaryTreeUsingArray {
public:

	Node **tree;

	BinaryTreeUsingArray() {
		tree = new Node*[MAXSIZE];
		for (int i = 0; i < MAXSIZE; i++) {
			tree[i] = NULL;
		}
	}

	void insert(int id);
	void print();

};
}

#endif //BINARYTREEUSINGARRAY
