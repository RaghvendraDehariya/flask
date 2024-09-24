#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;

	struct node *next;

}*first;

void creat(int A[],int size){

	struct node *t,*n;

	int i;

	first=(struct node*)malloc(sizeof(struct node));
	first->data=A[0];

	first->next=NULL;

	t=first;

	for(i=1;i<size;i++){

		n=(struct node*)malloc(sizeof(struct node));
		n->data=A[i];
		n->next=NULL;

		t->next=n;
		t=n;
	}


}

void display(struct node*p){

	while(p){

		printf("%d",p->data);

		p=p->next;

		if(p==NULL)
			printf("");
		else
			printf("-->");

	}

}

void insertinshorted(struct node *p,int n){

	struct node *q,*m;
	m=(struct node *)malloc(sizeof(struct node));
	m->data=n;
	m->next=NULL;


	if(first==NULL){

		first=(struct node *)malloc(sizeof(struct node));
		first->data=n;
		first->next=NULL;

	}

	else{

		while(p && p->data<n){

			q=p;
			p=p->next;

		}
		if(first->data>n){

			m->next=first;
			first=m;

		}
		else{
			m->next=q->next;
			q->next=m;
		}
	}



}

int main(){

	//	int A[]={1,2,4,6,7,9};

	//	creat(A,6);

	insertinshorted(first,3);
	insertinshorted(first,2);
	insertinshorted(first,4);
	insertinshorted(first,0);
	insertinshorted(first,9);
	insertinshorted(first,8);
	insertinshorted(first,6);
	insertinshorted(first,1);
	display(first);


	return 0;
}
