#ifndef stack_h
#define stack_h
#include "Queue.h"

typedef struct stack{
	int size;
	int Top;
	node **S;
}stack;


void creatstack(stack *st,int s){
	st->size=s;
	st->Top=-1;
	st->S=(node**)malloc(st->size*sizeof(node*));	
}


void push(stack *st,node *n){
	if(st->Top==st->size-1){
		printf("stack overflow");
	}
	else{
		st->Top++;
		st->S[st->Top]=n;
	}
}

node *pop(stack *st){
	node *x=NULL;
	if(st->Top==-1){
		printf("stack underflow");
	}
	else{
		x=st->S[st->Top];
		st->Top--;
	}
	return x;
}

node *stack_Top(stack st){
	node *x=NULL;
	if(st.Top==-1)
		return x;
	else
		x=st.S[st.Top];
	return x;
}

int isEmpty(stack st){
	if(st.Top==-1)
		return 1;
	else
		return 0;
}

int isFull(stack st){
	if(st.Top==st.size-1)
		return 1;
	else
		return 0;
}
#endif
