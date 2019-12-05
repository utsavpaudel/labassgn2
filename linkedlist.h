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
};




