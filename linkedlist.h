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
	Node* stack;
	Node* top;
	public:
	Stack();
	~Stack();
	bool isEmpty();
	void push(int data);
	int pop();
	int peak();

};

class Queue{
	private:
	LinkedList p;
	Node* queue;
	public:
	Queue();
	~Queue();
	void enqueue(int data);
	int dequeue();
	bool isEmpty();
	int rear();
	int front();
};




