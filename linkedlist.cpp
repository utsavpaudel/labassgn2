#include "linkedlist.h"

LinkedList:: LinkedList(){
	HEAD = NULL;
	TAIL = NULL;
}

LinkedList::~LinkedList(){}

Stack::Stack(){
	stack= NULL;
	top= NULL;
}

Stack::~Stack(){}

Queue::Queue(){
	queue= NULL;
}

Queue::~Queue(){}

void LinkedList::remove(int data){
	if(isEmpty()){
		return;
	}
	if(HEAD->info=data){
		removeFromHead();
		if(HEAD==NULL){
			TAIL=NULL;
		}
	}
	else{
		Node* temp= new Node();
		Node*prev= new Node();
		temp=HEAD->next;
		prev=HEAD;
		
		while (temp!=NULL){
			if(temp->info==data){
				prev->next=temp->next;
			
				if(prev->next==NULL){
				TAIL=prev;
				}
			}
			else{
				prev=prev->next;
				temp=temp->next;
			}
		}
	}
}

void LinkedList::add(int data, Node* &predecessor){
	Node* newNode= new Node();
	newNode->info=data;
	newNode->next=predecessor->next;
	predecessor->next=newNode;
}
bool LinkedList::search(int data){
	Node* temp;
	while(temp!=NULL){
		if(temp->info==data){
			return true;
		}
		else{
			temp=temp->next;
		}
	}
	return false;
}

bool LinkedList::isEmpty(){
	if(HEAD==NULL and TAIL==NULL){
		return true;
	}
	else{
		return false;
	}
}

bool LinkedList::retrieve(int data, Node* &outputptr){
	Node* temp=HEAD;
	while(temp!=NULL && temp->info!=data ){
		temp=temp->next;
	}
	if (temp==NULL){
		return false;
	}
	else{
		outputptr=temp;
		return true;
	}
}

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
bool Stack::isEmpty(){
    if (stack==NULL){
		return true;
	}
	else{
		return false;
	}
}

void Stack:: push(int data){
	Node* newNode = new Node();
	newNode->info = data;
	if (isEmpty()){
		newNode->next = newNode;
		stack= newNode;
	}
	else{
		newNode->next = stack->next;
		stack->next = newNode;
	}
}

int Stack:: pop(){
	if (isEmpty()){
		cout<<"Cannot pop from an empty stack" <<endl;
	}
	else{
		Node* poppingNode =stack->next;
		stack->next = poppingNode->next;
		int d =poppingNode->info;
		return d;
	}

}

int Stack::peak(){
	if(isEmpty()){
		std::cout<<"Stack Underflow"<<std::endl;
	}
	else{
		top=stack->next;
		return top->info;
	}
}

bool Queue:: isEmpty(){
	if (queue==NULL)
	{
		return true;
		}
	else{
		return false;
		}
}

void Queue::enqueue(int data){
	Node* newNode = new Node();
	newNode->info = data;
	if(isEmpty()){
		newNode->next = newNode;
		queue= newNode;
	}
	else{
		newNode->next = queue->next;
		queue->next = newNode;
		queue = newNode;
	}
}

int Queue::dequeue(){
	if (isEmpty()){
		cout<<"Cannot dequeue from an empty queue"<<endl;
	}
	else{
	Node* dequeingNode = queue->next;
	queue->next = dequeingNode->next;
	if(dequeingNode==queue){
		queue=NULL;
	}
	return dequeingNode->info;
	}
}
int Queue::rear(){
	if(isEmpty()){
		cout<<"Queue Underflow"<<endl;
	}
	else{
		return queue->info;
	}
}

int Queue::front(){
	if(isEmpty()){
		cout<<"Queue Underflow"<<endl;
	}
	else{
		return queue->next->info;
	}
}
	


int main(){
	LinkedList l;
	Node* p;
	Stack s;
	Queue q;
	cout<<endl<<endl;
	cout<<"			***Linked list***"<<endl;
	l.addToHead(5);l.addToHead(7);l.addToHead(56);l.addToHead(6); l.addToTail(10); l.removeFromHead();l.remove(56);
	l.retrieve(5,p);
	l.add(20,p);
	cout<<"Linked list final traversal: ";l.traverse();
	if(l.search(6)){
		std::cout<<"It is present"<<std::endl;
	}
	else{
		std::cout<<"Not present"<<std::endl;
	}
	cout<<endl;

	cout<<"Stack Implementation"<<endl;
	s.push(5);s.push(6);s.push(7);s.push(8);s.push(9);
	cout<<"Popped:"<< s.pop() <<endl ;
	cout<<"Top element:"<<s.peak()<<endl <<endl;

	cout<<"Queue Implementation"<<endl;
	q.enqueue(10);q.enqueue(11);q.enqueue(12);q.enqueue(13);
	cout<<"Dequeued:"<<q.dequeue()<<endl;
	cout<<"Rear element:"<<q.rear()<<endl;
	cout<<"Front element:"<<q.front()<<endl;

}
 
