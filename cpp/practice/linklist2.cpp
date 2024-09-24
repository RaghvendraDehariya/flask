#include<iostream>
#include<stdlib.h>
using namespace std;

class node{

	public:

	int data;
	node *next;

};

class linklist{

	private:
		node *first;
	
	public:
		linklist(){}
		linklist(int A[],int size);
		~linklist();

		void display();
		int length();
		void insert(int index,int num);
		int Delete(int index);

};

int linklist::length(){
	node *p=first;
	int count=0;
	while(p!=NULL){
		p=p->next;
		count++;
	}
	return count;
}

linklist::linklist(int A[],int size){
	
	first=new node;
	first->data=A[0];
	first->next=NULL;

	node *last,*n;

	last=first;

	for(int i=1;i<size;i++){

		n=new node;
		n->data=A[i];
		n->next=NULL;
		last->next=n;
		last=n;

	}


}

linklist::~linklist(){
	node *p;
	p=first;
	while(first){
		first=first->next;
		free(p);
		p=first;
	}


}

void linklist::display(){
	node *p;
	p=first;
	while(p!=NULL){

		cout<<p->data;
		if(p->next!=NULL){
			cout<<"-->";
		}
		p=p->next;

	}
	cout<<endl;

}


void linklist::insert(int index,int num){
	
	int i=1;
	node *n,*p;
	n=new node;
	n->data=num;
	n->next=NULL;
	p=first;

	if(index<0 || index>length()){
		return ;
	}

	else if(index==0){
		n->next=first;
		first=n;
	}

	else{
		while(i<index){
			p=p->next;
			i++;
		}
		
		n->next=p->next;
		p->next=n;
	}

}

int linklist::Delete(int index){
	int n;
	node *p,*temp;
	if(index<0 || index>length()){
		return -1;
	}

	else if(index==0){
		n=first->data;
		temp=first;
		first=first->next;
		free(temp);
		return n;
	}

	else{
		p=first;
		for(int i=1;i<index-1;i++){
			p=p->next;
		}
		n=p->next->data;
		temp=p->next;
		p->next=p->next->next;
		delete temp;
		return n;
	}

}

int  main(){

	int A[]={1,2,3,4,5},pos;

	linklist l(A,5);

	l.insert(0,0);
	
	cout<<"Enter a position:";

	cin>>pos;

	//cout<<l.length()<<endl;

	l.Delete(pos);

	l.display();

	return 0;
}
