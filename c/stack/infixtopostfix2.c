#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
struct node{
	char data;
	struct node *next;
}*top;

void push(char n){
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

char pop(){
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

char peek(int pos){
	struct node *p;
	p=top;
	for(int i=1;p!=NULL && i<pos;i++)
		p=p->next;
	if(p!=NULL)
		return p->data;
	return -1;
}

int isempty(){
	if(top==NULL)
		return 1;
	else
		return 0;
}

int isfull(){
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node ));

	if(p==NULL)
		return 1;
	else
		return 0;
}

void display(){
	struct node *p;
	p=top;
	while(p!=NULL){
		printf("%c ",p->data);
		p=p->next;
	}
	printf("\n");
}

void insert(char *name){

	int i;
	char *infix;
	infix=(char *)malloc(sizeof(char));

	infix=name;

	for(i=0;infix[i]!='\0';i++){
		push(infix[i]);
	}

}

int outpre(char op){

	if(op=='+' || op=='-')
		return 1;
	else if(op=='*' || op=='/')
		return 3;
	else if(op=='(')
		return 7;
	else if(op==')')
		return 0;	
	else if(op=='^')
		return 6;	
	return -1;
}

int inpre(char op){

	if(op=='+' || op=='-')
		return 2;
	else if(op=='*' || op=='/')
		return 4;
	else if(op=='('||op==')')
		return 0;
	else if(op=='^')
		return 5;	
	return -1;
}

int isoperand(char infix){

	if(infix=='+' || infix=='-' || infix=='*'||infix=='/'||infix=='('||infix==')'||infix=='^'){
		return 0;
	}

	else{
		return 1;
	}

}

char *IntoPost(char *infix)
{
	char *post;

	int i=0,j=0;
	int len=strlen(infix);
	post=(char*)malloc((len+1)*sizeof(char));

	while(infix[i]!='\0'){
		if(isoperand(infix[i])){
			post[j++]=infix[i++];
		}

		else{
			if(outpre(infix[i])>inpre(top->data)){
				inpre(infix[i]);
				push(infix[i++]);
			}
			else{
				if(outpre(infix[i])==0){
					while(inpre(top->data)!=0){
						post[j++]=pop();
					}
					pop();
				}
				else{
					post[j++]=pop();
				}
			}
		}

	}

	while(top->next->next!=NULL){
		post[j++]=pop();
	}

	post[j]='\0';

	return post;
}


int main(){

	//char *infix=get_string("Enter a string: ");

	char *infix="((a+b)*c-d)/e";

	printf("infix: %s\n",infix);

	push('#');

	char *postfix=IntoPost(infix);

	printf("postfix: %s\n",postfix);

	return 0;
}
