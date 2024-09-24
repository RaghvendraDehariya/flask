#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;

	struct node *next;

}*first;

void create(int A[],int size){

	struct node *temp,*n;
	int i;

	first = (struct node *)malloc(sizeof(struct node));
	first->data=A[0];
	first->next=NULL;

	temp=first;

	for(i=1;i<size;i++){

		n = (struct node *)malloc(sizeof(struct node));

		n->data=A[i];
		n->next=NULL;

		temp->next=n;
		temp=n;

	}


}

void display(struct node *p){

	while(p){

		printf("%d",p->data);

		p=p->next;

		if(p==NULL)
		{		printf(" ");
		}
		else{	printf("-->");
		}

	}

}

void Lindex(struct node* p,int key){

	while(p){

		if(p->data==key){

			printf("the element is found %d",p->data);

			return;
		}


		p=p->next;
	}

	printf("the element is not found %d",key);

}

int main(){

	int A[]={2,5,6,8,9};


	create(A,5);

	display(first);

	printf("\n");
	
	Lindex(first,3);

	printf("\n");

	Lindex(first,9);

	//printf("%d",index);



	return 0;
}
