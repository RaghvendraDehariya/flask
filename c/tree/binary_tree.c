#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

node *root=NULL;

void create(){

	node *p,*t;
	int x;
	Queue q;
	creat(&q,100);

	printf("Enter the root: ");
	root=(node *)malloc(sizeof(node));
	scanf("%d",&x);
	root->data=x;
	root->lchild=root->rchild=NULL;


	enqueue(&q,root);

	while(!isempty(q)){
		p=dequeue(&q);
		printf("Enter the left child of %d : ",p->data);
		scanf("%d",&x);

		if(x!=-1){
			t=(node *)malloc(sizeof(node));
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			enqueue(&q,t);
		}
		printf("Enter the right child of %d : ",p->data);
		scanf("%d",&x);

		if(x!=-1){
			t=(node *)malloc(sizeof(node));
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			enqueue(&q,t);
		}

	}
}


void inorder(node *p){
	if(p){
		inorder(p->lchild);
		printf("%d ",p->data);
		inorder(p->rchild);
	}
}

void preorder(node *p){
	if(p!=NULL){
		printf("%d ",p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	}
}

void postorder(node *p){
	if(p!=NULL){
		postorder(p->lchild);
		postorder(p->rchild);
		printf("%d ",p->data);
	}
}

void level(node *p){
	Queue q;
	creat(&q,100);
	node *temp;
	enqueue(&q,p);
	printf("%d ",p->data);

	while(p->lchild || p->rchild){
		p=dequeue(&q);

		if(p->lchild){
			enqueue(&q,p->lchild);
			printf("%d ",p->lchild->data);
		}
		if(p->rchild){
			enqueue(&q,p->rchild);
			printf("%d ",p->rchild->data);
		}
	}
}
void ipreorder(node *p){
	stack st;
	creatstack(&st,100);

	while(!isEmpty(st) || p!=NULL){
		if(p){
			printf("%d ",p->data);
			push(&st,p);
			p=p->lchild;
		}
		else{
			p=pop(&st);
			p=p->rchild;
		}
	}

}

void iinorder(node *p){
	stack st;
	creatstack(&st,100);

	while(!isEmpty(st) || p!=NULL){
		if(p){
			push(&st,p);
			p=p->lchild;
		}
		else{
			p=pop(&st);
			printf("%d ",p->data);
			p=p->rchild;
		}
	}

}

void ipostorder(node *p){
	stack st;
	creatstack(&st,100);
	int t=0;

	while(!isEmpty(st) || p!=NULL){
		if(p){
			push(&st,p);
			p=p->lchild;
		}
		else{
			p=pop(&st);
			p=p->rchild;

		}
	}

}


int main(void){

	create();
	printf("\n");
	//	level(root);
	ipostorder(root);
	printf("\n");
}
