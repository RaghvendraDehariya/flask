#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int size;
	int front;
	int rear;
	int *Q;
}queue;

void creat(queue *q,int s){
		
	q->size=s;

	q->Q=(int *)malloc(q->size*sizeof(int));

	q->front=q->rear=0;
}

void enqueue(queue *q,int x){
	if((q->rear+1)%q->size==q->front)
		printf("the queue is full\n");
	else{
		q->rear=(q->rear+1)%q->size;
		q->Q[q->rear]=x;
	}
}

int dequeue(queue *q){
	int x=-1;
	if(q->front==q->rear)
		printf("the queue is empty\n");
	else{
		q->front=(q->front+1)%q->size;
		x=q->Q[q->front];
	}
	return x;
}

void display(queue q){
	int i=q.front+1;
	do{

		printf("%d ",q.Q[i]);
		i=(i+1)%q.size;

	}while(i!=(q.rear+1)%q.size);
	printf("\n");
}

int main(void){
	
	queue q;

	creat(&q,5);

	enqueue(&q,3);
	enqueue(&q,6);
	enqueue(&q,9);

	display(q);
	
	printf("the dequeue element is: %d\n",dequeue(&q));

	enqueue(&q,12);
	enqueue(&q,15);
	display(q);
}
