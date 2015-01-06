#include <iostream>
#include "LinkedList.hpp"

namespace ns_data_structure {

using namespace std;

void LinkedList::insert(int id, string name) {
	Node *n = new Node(id, name);
	if (header == NULL) {
		header = n;
	} else {
		Node *curr;
		for (curr = header; curr->next != NULL; curr = curr->next)
			;
		curr->next = n;
	}
}

void LinkedList::print() {
	for (Node* curr = header; curr != NULL; curr = curr->next) {
		cout << curr->id << ", " << curr->name << endl;
	}
}

void LinkedList::remove(int id, string name) {
	Node *curr = header, *prev = NULL;
	while (curr != NULL) {
		if (curr->id == id && curr->name == name) {
			if (curr == header) {
				header = header->next;
				delete (curr);
				curr = header;
			} else {
				prev->next = curr->next;
				delete (curr);
				curr = prev->next;
			}
		} else {
			prev = curr;
			curr = curr->next;
		}
	}
}

void LinkedList::reverse() {
	Node *curr, *next, *prev = NULL;
	if (header != NULL) {
		curr = header;
		while (curr->next != NULL) {
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}
		curr->next = prev;
		header = curr;
	}
}

void LinkedList::xchgKthNode(int k) {
	Node **cache = new Node*[k];
	Node *curr = NULL;
	Node *replacePrev = NULL;
	Node *replacePre = NULL;
	if (header) {
		curr = header;
	} else {
		return;
	}

	int i = 0;
	bool gotFirstKthNode = false;
	bool hasAtleastKNodes = false;
	while (true) {

		if (i == k - 2 && !gotFirstKthNode) {
			replacePrev = curr;
			gotFirstKthNode = true;
		}

		if (i == k) {
			hasAtleastKNodes = true;
			i = 0;
		}

		if (!curr->next) {
			break;
		}

		cache[i++] = curr;
		curr=curr->next;
	}

	replacePre = cache[i];

	if(hasAtleastKNodes && replacePrev && replacePre){
		Node *temp1 = replacePrev -> next -> next;
		Node *temp2 = replacePre -> next -> next;
		Node *temp3 = replacePrev->next;
		replacePre->next->next = temp1;
		replacePrev->next->next = temp2;
		replacePrev -> next = replacePre -> next;
		replacePre -> next  = temp3;
	}

}

}
