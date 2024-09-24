#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int Top;
	int *S;
};

void push(struct stack *st,int n){
	if(st->Top==st->size-1){
		printf("stack overflow");
	}
	else{
		st->Top++;
		st->S[st->Top]=n;
	}
}

int pop(struct stack *st){
	int x=-1;
	if(st->Top==-1){
		printf("stack underflow");
	}
	else{
		x=st->S[st->Top];
		st->Top--;
	}
	return x;
}

int peek(struct stack st,int pos){
	int x=-1;
	if((st.Top-pos)+1<0){
		printf("invailide index");
	}
	else{
		x=(st.Top-pos)+1;
	}
	return x;
}

int stack_Top(struct stack st){
	int x=-1;
	if(st.Top==-1)
		return x;
	else
		x=st.S[st.Top];
	return x;
}

int isEmpty(struct stack st){
	if(st.Top==-1)
		return 1;
	else
		return 0;
}

int isFull(struct stack st){
	if(st.Top==st.size-1)
		return 1;
	else
		return 0;
}


int main(){
	struct stack st;
	st.size=10;
	st.Top=-1;
	st.S=(int *)malloc(st.size*sizeof(int ));
	
	for(int i=1;i<7;i++){
		st.S[++st.Top]=i;
	}

	push(&st,7);
	push(&st,8);
	push(&st,9);
	push(&st,10);

	printf("Pushing some elements\n");

	for(int i=st.Top-1;i>0;){
		printf("%d ",st.S[--i]);
	}
	

	printf("\nPoping some elements\n");

	printf("%d ",pop(&st));
	printf("%d ",pop(&st));
//	printf("%d ",pop(&st));
//	printf("%d ",pop(&st));
//	printf("%d ",pop(&st));
//	printf("%d ",pop(&st));
//	printf("%d ",pop(&st));
//	printf("%d ",pop(&st));
//	printf("%d ",pop(&st));
	


//	printf("\nPeeking some elements\n");
//	printf("%d ",peek(st,0));
//	printf("%d ",peek(st,1));
//	printf("%d ",peek(st,3));

	printf("\nstacks top value is: %d \n",stack_Top(st));

/*	if(isEmpty(st)==1)
		printf("stack is empty\n");
	else
		printf("stack is not empty\n");

	if(isFull(st)==1)
		printf("stack is full\n");
	else
		printf("stack is not full\n");
*/




	return 0;
}
