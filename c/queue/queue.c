#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int size;
	int front;
	int rear;
	int *Q;
}queue;

void creat(queue *q){
		
	printf("Enter the size of Queue : ");
	scanf("%d",&q->size);

	q->Q=(int *)malloc(q->size*sizeof(int));

	q->front=q->rear=-1;
}

void enqueue(queue *q,int x){
	if(q->rear==q->size-1)
		printf("the queue is full");
	else{
		q->rear++;
		q->Q[q->rear]=x;
	}
}

int dequeue(queue *q){
	int x=-1;
	if(q->front==q->rear)
		printf("the queue is empty");
	else{
		q->front++;
		x=q->Q[q->front];
	}
	return x;
}

void display(queue q){
	int i;
	for(i=q.front+1;i<=q.rear;i++){
		printf("%d ",q.Q[i]);
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

	display(q);
}
