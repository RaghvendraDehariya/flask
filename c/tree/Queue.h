#ifndef Queue_h
#define Queue_h

typedef struct node{
	struct node *lchild;
	int data;
	struct node *rchild;
}node;

typedef struct Queue{
	int size;
	int front;
	int rear;
	node **Q;
}Queue;

void creat(Queue *q,int s){
	
	q->size=s;
	q->front=q->rear=0;
	q->Q=(node **)malloc(q->size*sizeof(node *));

}

void enqueue(Queue *q,node *x){
	if((q->rear+1)%q->size==q->front)
		printf("The Queue is full.\n");
	else{
		q->rear=(q->rear+1)%q->size;

		q->Q[q->rear]=x;
	}
}

node * dequeue(Queue *q){
	node *x=NULL;
	if(q->front==q->rear)
		printf("The Queue is empty.\n");
	else{
		q->front=(q->front+1)%q->size;
		x=q->Q[q->front];
	}
	return x;
}

int isempty(Queue q){
	return q.front==q.rear;
}

#endif 
