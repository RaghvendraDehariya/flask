#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *next;

}*rear=NULL,*front=NULL;


void enqueue(int x){
	struct node *t;
	t=(struct node *)malloc(sizeof(struct node));
	if(t==NULL)
		printf("the queue is full\n");
	else{
		t->data=x;
		t->next=NULL;
		if(front==NULL){
			front=rear=t;
		}
		else{
			rear->next=t;
			rear=t;
		}
	}
}

int dequeue(){
	struct node *p;
	int x=-1;
	if(front==NULL)
		printf("the queue is empty\n");
	else{
		p=front;
		front=front->next;
		x=p->data;
		free(p);
	}
	return x;
}

void display(){
	struct node *p=front;
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}

int main(void){

	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);

	printf("%d \n",dequeue());
	
	display();

}
