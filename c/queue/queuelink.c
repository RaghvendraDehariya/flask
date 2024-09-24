#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
    struct node *next;
}node;

typedef struct{
	node *front;
	node * rear;
}queue;

void creat(queue *q){
	q->front=q->rear=NULL;
}

void enqueue(queue *q,int x){
	node *t;
	t=(node*)malloc(sizeof(node));
	if(t==NULL)
		printf("the queue is full");
	else{
		t->data=x;
		t->next=NULL;
		if(q->front==NULL){
			q->front=q->rear=t;
		}
		else{
			q->rear->next=t;
			q->rear=t;
		}
	}
}

int dequeue(queue *q){
	int x=-1;
	node *p;
	if(q->front==NULL)
		printf("the queue is empty");
	else{
		p=q->front;
		q->front=q->front->next;
		x=p->data;
		free(p);
	}
	return x;
}

void display(queue q){
	node *i=q.front;
	while(i!=NULL){
		printf("%d ",i->data);
		i=i->next;
	}
	printf("\n");
}

int main(void){

	queue q;
	
	creat(&q);

	enqueue(&q,3);
	enqueue(&q,6);
	enqueue(&q,9);

	display(q);
	
	printf("the dequeue element is: %d\n",dequeue(&q));

	enqueue(&q,12);
	enqueue(&q,15);
	enqueue(&q,18);

	display(q);
}
