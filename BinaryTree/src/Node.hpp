#ifndef NODE
#define NODE
#include <iostream>
namespace ns_data_structure {

class Node {
public:
	int id;
	Node *left;
	Node *right;

	Node(int i) :
			id(i),left(NULL),right(NULL) {
		/*left = NULL;
		right = NULL;*/
	}
};

}
;

#endif //NODE
