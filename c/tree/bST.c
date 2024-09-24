#include<stdio.h>
#include<stdlib.h>


typedef struct node{
	struct node *lchild;
	int data;
	struct node *rchild;
}node;

node *root=NULL;

void insert(int key){
	node *t=root;
	node *n,*r;

	if(root==NULL){
		n=(node *)malloc(sizeof(node));
		n->data=key;
		n->lchild=n->rchild=NULL;
		root=n;
		return ;
	}
	
	while(t!=NULL){
		r=t;
		if(key<t->data){
			t=t->lchild;
		}
		else if(key>t->data){
			t=t->rchild;
		}
		else{
			return ;
		}
	}
	n=(node *)malloc(sizeof(node));
	n->data=key;
	n->lchild=n->rchild=NULL;
		
	if(key<r->data)
		r->lchild=n;
	else
		r->rchild=n;

}

void inorder(node *p){
	
	if(p){
		inorder(p->lchild);
		printf("%d ",p->data);
		inorder(p->rchild);
	}
}

int main(void)
{
	insert(10);
	insert(30);
	insert(50);
	insert(70);
	insert(90);

	inorder(root);

}
