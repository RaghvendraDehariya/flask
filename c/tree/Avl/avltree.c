#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	
	struct node *lchild,*rchild;
	int height;
	int data;

}node;

node *root=NULL;

int Heigth(node *p){
	int x,y;
	if(p==NULL)
		return 0;
	
	x=Heigth(p->lchild);
	y=Heigth(p->rchild);

	return x>y?x+1:y+1;

}

node *insert(node *p,int key){
	
	node *t;
	
	if(p==NULL){
		t=(node *)malloc(sizeof(node));
		t->data=key;
		t->height=1;
		t->rchild=t->lchild=NULL;
		
		return t;
	}

	if(key < p->data){
		p->lchild = insert(p->lchild,key);
	}
	
	else if(key > p->data)
	{	
		p->rchild = insert(p->rchild,key);
	}

	p->height = Heigth(p);

	return p;
}

void preorder(node *p){
	if(p){
		printf("%d ",p->data);
		preorder(p->lchild);
		preorder(p->rchild);
	}
}

void inorder(node *p){
	if(p){
		inorder(p->lchild);
		printf("%d : %d\n",p->data,p->height);
		inorder(p->rchild);
	}
}

int main(){

	root=insert(root,30);

	insert(root,20);
	insert(root,50);
	insert(root,10);
	insert(root,40);

	inorder(root);
	printf("\n");
	preorder(root);

	return 0;
}
