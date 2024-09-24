#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

class node{

		int data;
		node *next;
		node *start;

public:

		void traverse(int a[],int num){

			node *temp,*n;

			start=(node *)malloc(sizeof(node));

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

		void show(){

			while(start!=NULL){

				cout<<start->data<<"-->";

				start=start->next;

			}




		}




};

int main(){

	int A[9]={1,2,3,4,5,6,7,8,9};

	node a;

	a.traverse(A,9);

	a.show();


	return 0;
}
