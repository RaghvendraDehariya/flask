#include<stdio.h>
#include<stdlib.h>
struct node{

	int data;

	struct node * next;

}*start=0;

void creat(int a[],int num){

	struct node *temp,*n;

	start=(struct node *)malloc(sizeof(struct node));

	start->data=a[0];

	start->next=NULL;

	temp=start;

	for(int i=1;i<num;i++){

		n=(struct node *)malloc(sizeof(struct node));

		n->data=a[i];

		n->next=NULL;

		temp->next=n;

		temp=n;

	}

}

void display(struct node *p){

	while(p!=NULL){

		printf("%d--> ",p->data);

		p=p->next;

	}


}


int main(){

	int a[100]={54,86,693,682,694,749,527};

	creat(a,7);

	display(start);

	return 0;
}
