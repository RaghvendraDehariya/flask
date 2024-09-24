#include<stdio.h>
#include<stdlib.h>
struct node {
	char data;
	struct node *next;
}*top=NULL;

void push(char a){
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=a;
	n->next=NULL;
	if(top==NULL){
		top=n;
	}
	
	else if(n==NULL){
		printf("stack is full");
	}

	else{
		n->next=top;
		top=n;
	}
}

char pop(){
	char x=-1;
	struct node *temp;
	if(top!=NULL){
		temp=top;
		x=top->data;
		top=top->next;
		free(temp);
	}
	return x;
}

int isempty(){
	if(top==NULL)
		return 1;
	return 0;
}

int isfull(){
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	if(p==NULL)
		return 1;
	return 0;
}


void display(struct node *p){
	while(p!=NULL){
		printf("%c",p->data);
		//if(p->next!=NULL)
		//	printf("-->");

		p=p->next;
	}
			printf("\n");
}

int isbalance(char *p){
	
	int i;

	for(i=0;p[i]!='\0';i++){
		if(p[i]=='('){
			push(p[i]);
		}
		else if(p[i]==')'){
			if(top==NULL)
				return 0;
			pop();
		}
	}
	if(top==NULL)
		return 1;
	else
		return 0;
}

int isbal(char *p){

	int i;

	for(i=0;p[i]!='\0';i++){
		if(p[i]=='(' || p[i]=='{' ||p[i]=='['){
			push(p[i]);
		}
		else if(p[i]==')'){
			if(top!=NULL && top->data=='(')
				pop();
			else
				return 0;
		}
		else if(p[i]=='}'){
			if(top!=NULL && top->data=='{')
				pop();
			else
				return 0;
		}
		else if(p[i]==']'){
			if(top!=NULL && top->data=='[')
				pop();
			else
				return 0;
		}
	}

	if(top==NULL)
		return 1;
	else
		return 0;


}

int main(){

	char *exp="[{(a+b)*(c-d)}+{(e+f)*(x-y)}]";

	//printf("%d \n",isbal(exp));
	
	if(isbal(exp)==1)
		printf("true");
	else
		printf("false");


	return 0;
}
