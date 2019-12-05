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
	if (TAIL==NULL)
	{
	TAIL= HEAD;
	}
}

void LinkedList:: traverse(){
	Node *temp = HEAD;

	while (temp != NULL){
	cout<<temp->info <<" ";
	temp= temp->next;
	}
	cout<< endl;
}

void LinkedList:: addToTail(int data){
	Node *newNode = new Node();
	newNode->info = data;
	newNode->next = NULL;
	TAIL-> next = newNode;
	TAIL = newNode;
}

void LinkedList :: removeFromHead(){
	Node* nodeToDelet = new Node();
	nodeToDelet = HEAD;	
	HEAD = nodeToDelet->next;
	delete nodeToDelet;

}

void Stack:: 
	

int main(){
	LinkedList l;
	l.addToHead(5);l.addToHead(7);l.addToHead(6); l.addToTail(10);//l.removeFromHead();
	//l.traverse();
	
	
	
	/*Node *p = new Node();
	bool found = l.retrieve(7,p);
	
	if (found){
	l.add(12,p)
	}*/
}
 
