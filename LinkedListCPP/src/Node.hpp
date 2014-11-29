#include <string>
using namespace std;

#ifndef NODE
#define NODE

namespace ns_data_structure {

class Node {

public:
	int id;
	string name;
	Node *next;

	Node(int id,string name){
		this->id = id;
		this->name = name;
		this->next = NULL;
	}

	bool operator==(Node that);
};

}

#endif
