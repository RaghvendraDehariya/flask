#include<iostream>
using namespace std;
#ifndef queue_h
#define queue_h

class node{
	public:
		node *lchild;
		int data;
		node *rchild;
};

class queue{

	int size;
	int front;
	int rear;
	node **Q;

	public:
	
	queue(int s){
		size=s;
		front=rear=-1;
		Q= new node*[this->size];
	}

	void enqueue(node *x);
	int isempty(){return front==rear;}
	node * dequeue();

};


void queue::enqueue(node *x){
	if(rear==size-1)
		cout<<"the queue is full";
	else{
		rear++;
		Q[rear]=x;
	}
}

node * queue::dequeue(){
	node * x=NULL;
	if(front==rear)
		cout<<"the queue is empty"<<endl;
	else{
		front++;
		x=Q[front];
	}
	return x;
}


#endif
