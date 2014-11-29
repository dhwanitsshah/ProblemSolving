#include "BinaryTree.hpp"
#include "Queue.hpp"
#include <iostream>
using namespace std;
namespace ns_data_structure {

Node* BinaryTree::getLeft(Node *n) {
	return n->left;
}

Node* BinaryTree::getRight(Node *n) {
	return n->right;
}

void BinaryTree::insert(int id) {
	Node *n = new Node(id);

	if (root == NULL) {
		root = n;
	} else {

		Queue *queue = new Queue(100);
		Node *curr = root;

		while (curr!=NULL) {

			if (curr->left != NULL) {
				queue->enqueue(curr->left);
			} else {
				curr->left = n;
				break;
			}

			if (curr->right != NULL) {
				queue->enqueue(curr->right);
			} else {
				curr->right = n;
				break;
			}

			curr = queue->dequeue();
		}
	}
}

void BinaryTree::print() {
	if (root == NULL) {
		return;
	} else {
		Queue *queue = new Queue(100);
		Node* curr = root;

		while (curr != NULL) {

			if (curr != NULL)
				cout << curr->id;

			if (curr->left != NULL) {
				queue->enqueue(curr->left);
			}

			if (curr->right != NULL) {
				queue->enqueue(curr->right);
			}

			curr = queue->dequeue();

		}
	}
}
}
;
