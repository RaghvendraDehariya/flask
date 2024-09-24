#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;

	struct node *next;

}*start=NULL;

void creat(int a[],int num){

	struct node *temp,*n;

	start=(struct node*)malloc(sizeof(struct node));

	start->data=a[0];

	start->next=NULL;

	temp=start;

	for(int i=1;i<11;i++){

		n=(struct node*)malloc(sizeof(struct node));

		n->data=a[i];

		n->next=NULL;

		temp->next=n;

		temp=temp->next;


	}

}
void display(struct node *p){

	while(p!=NULL){

		printf("%d--> ",p->data);

		p=p->next;

	}

}



int main(){

	int a[100]={3,6,99,34,57,38,59,97,737,247,369};

	creat(a,11);

	display(start);








	return 0;
}
