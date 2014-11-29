#ifndef QUEUE
#define QUEUE
#include "Node.hpp"
namespace ns_data_structure {

class Queue {
public:
	int front;
	int rear;
	int size;
	Node **storage;
	Queue(int size) {
		storage = new Node*[size];
		front = -1;
		rear = -1;
		this->size = size;
	}

	void enqueue(Node *n);
	Node* dequeue();
	bool isFull();
	bool isEmpty();
	bool hasJustOneElement();
	void print();
	Node* getFront();

};
}
#endif //QUEUE
