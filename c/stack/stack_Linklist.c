#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*top;

void push(int n){
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	if(p==NULL)
		printf("stack is full");
	else{
		p->data=n;
		p->next=top;
		top=p;
	}
}

int pop(){
	int x=-1;
	struct node *p;
	if(top==NULL)
		printf("stack is empty");
	else{
		p=top;
		top=top->next;
		x=p->data;
		free(p);
	}	
	return x;
}

int peek(int pos){
	struct node *p;
	p=top;
	for(int i=1;p!=NULL && i<pos;i++)
		p=p->next;
	if(p!=NULL)
		return p->data;
	return -1;

}

int stack_top(){
	if(top==NULL)
		return -1;
	return top->data;
}

int isempty(){
	return top?0:1;
}

int isfull(){
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));

	int r=p?0:1;
	free(p);
	return r;
}


void display(){
	struct node *p;
	p=top;
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}

int main(){

//	push(10);
//	push(20);
//	push(30);
	push(40);
	push(50);

	printf("%d\n",pop());
//	printf("%d\n",pop());

	display();
	
	printf("peek : %d\n",peek(1));
	printf("isfull : %d\n",isfull());
	printf("isempty : %d\n",isempty());
	printf("stack_top : %d\n",stack_top());

	return 0;
}
