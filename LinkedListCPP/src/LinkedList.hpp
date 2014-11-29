#include "Node.hpp"
#include <string.h>

#ifndef LINKEDLIST
#define LINKEDLIST

using namespace std;

namespace ns_data_structure {

class LinkedList {

public:
	Node* header;
	LinkedList() {
		header = NULL;
	}

	void insert(int id, string name);
	void print();
	void remove(int id, string name);
	void reverse();

};
}

#endif //LINKEDLIST
