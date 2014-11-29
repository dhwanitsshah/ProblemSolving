#ifndef BINARYTREE
#define BINARYTREE

#include "Node.hpp"

namespace ns_data_structure{

class BinaryTree{
public:
	Node *root;

	Node* getLeft(Node *n);
	Node* getRight(Node *n);

	void print();
	void insert(int id);

};
};

#endif //BINARYTREE
