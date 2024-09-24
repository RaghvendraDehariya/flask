#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;



struct node{

	int data;
	struct node *next;

}*start=NULL;



void creat(int a[],int num){

	struct node *temp,*n;

	start=new struct node[0];

	start->data=a[0];
	start->next=NULL;

	temp=start;

	for(int i=1;i<num;i++){

		n=new struct node[num];
		n->data=a[i];
		n->next=NULL;

		temp->next=n;
		temp=n;

	}



}

void display(struct node *p){

	while(p!=NULL){

		cout<<p->data<<"-->";

		p=p->next;

	}

}

class nodes{

	int data;
	nodes *next;
	nodes *start=NULL;

	public:

	void creat(int a[],int num){

		nodes *temp,*n;

		start=new nodes[0];

		start->data=a[0];
		start->next=NULL;

		temp=start;

		for(int i=1;i<num;i++){

			n=new nodes[num];
			n->data=a[i];
			n->next=NULL;

			temp->next=n;
			temp=n;

		}



	}

	void display(){

		while(start!=NULL){

			cout<<start->data<<"-->";

			start=start->next;

		}

	}


};	

/*class nodes{

  int data;
  node *next;
  node *start=NULL;

  public:

  void creat(int a[],int num){

  node *temp,*n;

  start=new node[0];

  start->data=a[0];
  start->next=NULL;

  temp=start;

  for(int i=1;i<num;i++){

  n=new node[num];
  n->data=a[i];
  n->next=NULL;

  temp->next=n;
  temp=n;

  }



  }

  void display(){

  while(start!=NULL){

  cout<<start->data<<"-->";

  start=start->next;

  }

  }
  };

*/


int main(){

	nodes obj;

	int a[5]={2,4,6,8,10};

	int b[10]={43,34,85,37,459,27,55,859,69,3};

	obj.creat(a,5);

	obj.display();

	cout<<endl;

	obj.creat(b,10);

	obj.display();







	return 0;
}
