#include <iostream>
using namespace std; 
class Node{
	public: int info;
		Node *next;
};

class LinkedList {
	private:
	Node * HEAD;
	Node* TAIL;
	
	public:
	LinkedList();
	~LinkedList();
	bool isEmpty();
	void addToHead(int data);
	void traverse();
	void addToTail(int data);
	void removeFromHead();

};

class Stack{
	private:
	LinkedList l;
	public:
	void push(int data);
	int pop();

};




