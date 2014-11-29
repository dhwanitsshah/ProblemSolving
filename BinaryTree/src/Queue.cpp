#include "Queue.hpp"
#include <iostream>

using namespace std;

namespace ns_data_structure {

void Queue::enqueue(Node *n) {

	if (isFull()) {
		cout << "Queue is full" << endl;
		return;
	}

	if (isEmpty()) {
		front++;
		rear++;
		storage[front] = n;
	} else {
		storage[++rear] = n;
	}
}

Node* Queue::dequeue() {

	if (isEmpty())
		return NULL;

	Node *n = storage[front];

	if (hasJustOneElement())
		front = rear = -1;
	else
		++front;

	return n;

}

void Queue::print(){
	if(!isEmpty()){
		if(hasJustOneElement()){
			cout<<storage[front]->id<<endl;
		}
		else
		{
			for(int i = front;i<=rear;i++)
			{
				cout<<storage[i]->id<<" ";
			}
		}


	}
}

bool Queue::isFull() {
	if (rear == (size - 1))
		return true;
	else
		return false;
}

bool Queue::isEmpty() {
	if (front == -1 && rear == -1)
		return true;
	else
		return false;
}

bool Queue::hasJustOneElement() {
	if (front == rear)
		return true;
	else
		return false;
}

Node* Queue::getFront(){
	if(!isEmpty())
		return storage[front];
	else
		return NULL;
}

}
