#include "linkedlist.h"

LinkedList:: LinkedList(){
	HEAD = NULL;
	TAIL = NULL;
}

LinkedList::~LinkedList(){}

void LinkedList::addToHead(int data){
	Node* newNode = new Node();
	newNode->info= data;
	newNode->next = HEAD;
	HEAD= newNode;
}

void LinkedList:: traverse(){
	Node *temp = HEAD;

	while (temp != NULL){
	cout<<temp->info <<" ";
	temp= temp->next;
	}
	cout<< endl;
}

int main(){
	LinkedList l;
	l.addToHead(5);l.addToHead(7);l.addToHead(6);l.addToHead(8);
	l.traverse();

}
 
