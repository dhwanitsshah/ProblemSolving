#include <iostream>
#include "LinkedList.hpp"
using namespace std;
using namespace ns_data_structure;

int main() {
	LinkedList *LL = new LinkedList();
	LL->insert(0, "Node0");
	LL->insert(1, "Node1");
	LL->insert(1, "Node1");
	LL->insert(2, "Node2");
	LL->insert(3, "Node3");

	LL->print();

	cout << endl << endl;

	//Should delete two nodes
	LL->remove(1, "Node1");
	LL->print();

	cout << endl << endl;

	//Should delete a node
	LL->remove(3, "Node3");
	LL->print();

	//Operator overloading (comparison operator)
	Node *n1 = new Node(100, "abc");
	Node *n2 = new Node(100, "abc");
	(*n1 == *n2) ? cout << "equal" : cout << "not equal";

	//insert nodes
	LL->insert(4, "Node4");
	LL->insert(5, "Node5");
	LL->insert(6, "Node6");

	cout << endl << endl << "After insert few nodes" << endl;
	//print list
	LL->print();

	//reverse list
	LL->reverse();

	cout << endl << endl << "After reversing list" << endl;
	//print list again
	LL->print();

	LL->xchgKthNode(2);
	cout << endl << endl << "After exchanging k elements from front and last of list" << endl;
	//print list again
	LL->print();

}

