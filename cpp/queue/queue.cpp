#include<iostream>

using namespace std;

class queue{

	int size;
	int front;
	int rear;
	int *Q;

	public:
	
	queue(){
		size=10;
		front=rear=-1;
		Q=new int[size];
	}

	queue(int s){
		size=s;
		front=rear=-1;
		Q=new int[size];
	}

	void enqueue(int x);

	int dequeue();

	void display();
};


void queue::enqueue(int x){
	if(rear==size-1)
		cout<<"the queue is full";
	else{
		rear++;
		Q[rear]=x;
	}
}

int queue::dequeue(){
	int x=-1;
	if(rear==front)
		cout<<"the queue is empty"<<endl;
	else{
		front++;
		x=Q[front];
	}
	return x;
}

void queue::display(){
	int i;
	for(i=front+1;i<=rear;i++){
		cout<<Q[i]<<" ";
	}
	cout<<endl;
}

int main(void){

	queue q;

	q.enqueue(3);
	q.enqueue(6);
	q.enqueue(9);
	
	q.display();

	cout<<q.dequeue()<<endl;

	q.display();
}
