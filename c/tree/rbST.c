#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

/*typedef struct node{
  struct node *lchild;
  int data;
  struct node *rchild;
  }node;
  */
node *root=NULL;

node * insert(node *t,int key){
	node *n;

	if(t==NULL){
		n=(node *)malloc(sizeof(node));
		n->data=key;
		n->rchild=n->lchild=NULL;
	}
	else{
		if(key<t->data){
			t->lchild=insert(t->lchild,key);
		}
		else if(key>t->data){
			t->rchild=insert(t->rchild,key);
		}
	}

	return n;
}

void inorder(node *p){

	if(p){
		inorder(p->lchild);
		printf("%d ",p->data);
		inorder(p->rchild);
	}
}

void preorder(node *p){

	if(p){
		printf("%d ",p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	}
}


int search(node *p,int key){

	while(p!=NULL){

		if(key<p->data)
		{
			p=p->lchild;
		}

		else if(key>p->data){
			p=p->rchild;
		}

		else{
			return 1;
		}

	}

	return 0;

}

int height(node *p){

	int x,y;

	if(p==NULL)
		return 0;

	x=height(p->lchild);
	y=height(p->rchild);

	return x>y?x+1:y+1;
}

node *inpre(node *p){
	while(p && p->rchild!=NULL)
		p=p->rchild;
	return p;
}

node *insucc(node *p){
	while(p && p->lchild!=NULL)
		p=p->lchild;
	return p;
}

node * delete(node *p,int key){

	node *q;

	if(p==NULL)
		return NULL;

	if(p->lchild==NULL && p->rchild==NULL){

		if(p==root)
			root=NULL;

		free(p);
		return NULL;
	}

	if(key<p->data)
		p->lchild=delete(p->lchild,key);

	else if(key>p->data)
		p->rchild=delete(p->rchild,key);

	else{
		if(height(p->lchild)>height(p->rchild)){
			q=inpre(p->lchild);
			p->data=q->data;
			p->lchild=delete(p->lchild,q->data);
		}
		else{
			q=insucc(p->rchild);
			p->data=q->data;
			p->rchild=delete(p->rchild,q->data);
		}
	}

	return p;
}


void pretotree(int A[],int size,node *p){
	stack st;
	node *t;
	int i=0;

	root=(node *)malloc(sizeof(node));
	root->data=A[i++];
	root->lchild=root->rchild=NULL;
	p=root;

	while(i<size){
		if(A[i] < p->data){
			t=(node *)malloc(sizeof(node));
			t->data=A[i++];
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			push(&st,p);
			p=t;
		}
		else{

			if(A[i] > p->data && A[i] < stack_Top(st)->data){
				t=(node *)malloc(sizeof(node));
				t->data=A[i++];
				t->lchild=t->rchild=NULL;
				p->rchild=t;
				p=t;
			}
			else {
				p=pop(&st);
			}
		}
	}

}


int main()
{

	int A[]={30,10,20};

	pretotree(A,3,root);

	preorder(root);

	printf("\n");
	   
	inorder(root);


	/*
	   int key;

	   root=insert(root,50);
	   insert(root,30);
	   insert(root,40);
	   insert(root,20);
	   insert(root,25);
	   insert(root,10);

	   inorder(root);

	   printf("\nEnter the key to find a element : ");

	   scanf("%d",&key);


	   if(search(root,key)==1){
	   printf("the key element is %d found.\n",key);
	   }

	   else{
	   printf("\nthe key element is %d not found.\n",key);
	   }

	   delete(root,key);
	   inorder(root);
	   */
	return 0;
}
