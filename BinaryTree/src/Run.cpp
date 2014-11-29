#include <iostream>
#include "BinaryTreeUsingArray.hpp"
#include "BinaryTree.hpp"
#include "Queue.hpp"
#include "Node.hpp"

using namespace std;
using namespace ns_data_structure;

int main() {
	BinaryTreeUsingArray* btree = new BinaryTreeUsingArray();
	btree->insert(5);
	btree->insert(6);
	btree->insert(7);
	btree->print();

	Queue *queue = new Queue(10);
	Node *n0 = new Node(0);
	Node *n1 = new Node(1);
	Node *n2 = new Node(2);
	Node *n3 = new Node(3);

	cout<<endl;

	queue->enqueue(n0);
	queue->enqueue(n1);
	queue->enqueue(n2);
	queue->enqueue(n3);
	queue->print();

	cout<<endl<<"Get Front";
	queue->getFront();

	cout<<endl;
	cout<<queue->dequeue()->id<<endl;
	queue->print();

	BinaryTree *bt = new BinaryTree();
	bt->insert(10);
	bt->insert(20);
	bt->insert(30);
	bt->insert(40);
	cout<<endl;
	bt->print();

	cout<<endl<<bt->root->left->left->id;


}
