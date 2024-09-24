#include<iostream>
#include "queue.h"
using namespace std;

class tree{
public:
	node *root;
	tree(){root=NULL;}
	void treecreat();
	void postorder(node *p);
	void inorder(node *p);
	void preorder(node *p);
	int height(node *p);

};

void tree::treecreat(){
	int x;
	node *p,*t;

	queue q(100);
	root=new node;

	cout<<"Enter the root: ";
	cin>>x;

	root->data=x;
	root->lchild=root->rchild=NULL;
	q.enqueue(root);

	while(!q.isempty()){
		p=q.dequeue();
		cout<<"Enter the lchild of "<<p->data <<": ";
		cin>>x;
		if(x!=-1){
			t=new node;
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;
			q.enqueue(t);
		}
		cout<<"Enter the rchild of "<<p->data<<": ";
		cin>>x;
		if(x!=-1){
			t=new node;
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			q.enqueue(t);
		}

	}

}

void tree::postorder(node *p){
	if(p){
		postorder(p->lchild);
		postorder(p->rchild);
		cout<<p->data<<" ";
	}
}

void tree::inorder(node *p){
	if(p){
		inorder(p->lchild);
		cout<<p->data<<" ";
		inorder(p->rchild);
	}
}

void tree::preorder(node *p){
	if(p){
		cout<<p->data<<" ";
		preorder(p->lchild);
		preorder(p->rchild);
	}
}

int tree::height(node *root){
	int x=0,y=0;
	if(root==0)
		return 0;
	
	x=height(root->lchild);
	y=height(root->rchild);

	if(x>y)
		return x;
	else
		return y+1;
}

int main(void){
	
	tree t;

	t.treecreat();
	cout<<"Preorder : ";
	t.preorder(t.root);
	cout<<"\nInorder : ";
	t.inorder(t.root);
	cout<<"\nPostorder : ";
	t.postorder(t.root);
	cout<<endl;
	cout<<"The height of the tree is: "<<t.height(t.root);

}
