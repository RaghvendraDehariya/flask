#include<stdio.h>
#include<stdlib.h>
struct node{

	int data;

	struct node *next;

}*first;

void create(int A[],int size){
	
	struct node *temp,*n;
	int i;

	first=(struct node *)malloc(sizeof(struct node));

	first->data=A[0];
	first->next=NULL;
	temp=first;

	for(i=1;i<size;i++){

		n=(struct node *)malloc(sizeof(struct node));
		n->data=A[i];
		n->next=NULL;

		temp->next=n;
		temp=n;

	}

}

void display(struct node *p){

	while(p!=NULL){
	
		printf("%d",p->data);
		
		p=p->next;

		if(p!=NULL){
	
			printf("-->");

		}

		else{
		
			printf(" ");

		}
	}
}

void Rdisplay(struct node *p){
	
	if(p!=NULL){
	
		printf("%d",p->data);


		if(p->next!=NULL){
	
			printf("-->");

		}

		else{
		
			printf(" ");

		}

		Rdisplay(p->next);
	}

}

int main(){

	
	int A[]={3,4,5,6,7,8,9};

	create(A,7);

	Rdisplay(first);


	return 0;
}
